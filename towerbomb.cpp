#include<towerbomb.h>
#include<QPixmap>
#include<QTimer>
#include<qmath.h>
#include<QList>
#include<enemy.h>
#include<QGraphicsScene>

towerbomb::towerbomb(QGraphicsItem *parent)
{
    setPixmap(QPixmap(":/images/towerbomb.png"));
    QTimer * time = new QTimer(this);
    connect(time,SIGNAL(timeout()),this,SLOT(move()));
    time->start(50);
}

void towerbomb::move()
{
    QList<QGraphicsItem *> colliding_items = collidingItems();
       for (int i = 0, n = colliding_items.size(); i < n; ++i){

           if (typeid(*(colliding_items[i])) == typeid(enemy)){
               enemy * zombie = dynamic_cast<enemy *>(colliding_items[i]);
               zombie->decrease(1);
               if(zombie->health<=0){
               scene()->removeItem(colliding_items[i]);

               delete colliding_items[i];

}
                scene()->removeItem(this);
                delete this;
               return;
           }
}

    double size=30;
    double theta = 18;
    double dy = size*qSin(qDegreesToRadians(theta));
    double dx = size*qCos(qDegreesToRadians(theta));
    setPos(x()+dx,y()+dy);
    if(x()>=800){
        scene()->removeItem(this);
        delete this;
    }
}
