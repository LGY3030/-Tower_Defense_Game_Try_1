#include<bellehealb.h>
#include<QPixmap>
#include<QTimer>
#include<qmath.h>
#include<enemy.h>
#include<QGraphicsScene>
#include<csieman.h>
#include<dirtyman.h>
#include<tank.h>
bellehealb::bellehealb(QGraphicsItem *parent)
{
    setPixmap(QPixmap(":/images/belleheal.png"));
    QTimer * time = new QTimer(this);
    connect(time,SIGNAL(timeout()),this,SLOT(move()));
    time->start(50);
}

void bellehealb::move()
{
    QList<QGraphicsItem *> colliding_items = collidingItems();
       for (int i = 0, n = colliding_items.size(); i < n; ++i){

           if (typeid(*(colliding_items[i])) == typeid(csieman)){
               csieman * superman = dynamic_cast<csieman *>(colliding_items[i]);
               if(superman->health>=10){
                   break;
               }
               superman->increase(1);
                scene()->removeItem(this);
                delete this;
               return;
           }
           if (typeid(*(colliding_items[i])) == typeid(dirtyman)){
               dirtyman * dirtyman87 = dynamic_cast<dirtyman *>(colliding_items[i]);

               if(dirtyman87->health>=10){
                   break;
               }
               dirtyman87->increase(1);
                scene()->removeItem(this);
                delete this;
               return;
           }
           if (typeid(*(colliding_items[i])) == typeid(tank)){
               tank * fatman = dynamic_cast<tank *>(colliding_items[i]);
               if(fatman->health>=10){
                   break;
               }
               fatman->increase(1);
                scene()->removeItem(this);
                delete this;
               return;
           }
}
    double size=30;
    double theta = -10;
    double dy = size*qSin(qDegreesToRadians(theta));
    double dx = size*qCos(qDegreesToRadians(theta));
    setPos(x()+ dx,y()+dy);

    }

