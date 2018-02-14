#include<dirtymanattack.h>
#include<QPixmap>
#include<QTimer>
#include<qmath.h>
#include<enemy.h>
#include<QGraphicsScene>
#include<enemy_towera.h>
#include<game.h>
#include<enemy_towerb.h>
extern game*play;
dirtymanattack::dirtymanattack(QGraphicsItem *parent)
{
    setPixmap(QPixmap(":/images/dirtymanattack.png"));
    QTimer * time = new QTimer(this);
    connect(time,SIGNAL(timeout()),this,SLOT(move()));
    time->start(50);
}

void dirtymanattack::move()
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
           if (typeid(*(colliding_items[i])) == typeid(enemy_towera)){
               enemy_towera * enemytowera = dynamic_cast<enemy_towera *>(colliding_items[i]);
               enemytowera->decrease(1);
               if(enemytowera->health<=0){
               scene()->removeItem(colliding_items[i]);

               delete colliding_items[i];
               play->gameoverwin();
}
                scene()->removeItem(this);
                delete this;
               return;
           }
           if (typeid(*(colliding_items[i])) == typeid(enemy_towerb)){
               enemy_towerb * enemytowerb = dynamic_cast<enemy_towerb *>(colliding_items[i]);
               enemytowerb->decrease(1);
               if(enemytowerb->health<=0){
               scene()->removeItem(colliding_items[i]);
               delete colliding_items[i];

}
                scene()->removeItem(this);
                delete this;
               return;
           }
}

    double size=30;
    double theta = 0;
    double dy = size*qSin(qDegreesToRadians(theta));
    double dx = size*qCos(qDegreesToRadians(theta));
    setPos(x()+ dx,y()+dy);


}
