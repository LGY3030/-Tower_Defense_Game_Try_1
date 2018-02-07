#include<bullet.h>
#include<QPixmap>
#include<QTimer>
#include<qmath.h>
#include<belle.h>
#include<csieman.h>
#include<towera.h>
#include<tank.h>
#include<dirtyman.h>
#include<game.h>
#include<towerb.h>
extern game*play;
bullet::bullet(QGraphicsItem *parent)
{
    setPixmap(QPixmap(":/images/bullet.png"));
    QTimer * time = new QTimer(this);
    connect(time,SIGNAL(timeout()),this,SLOT(move()));
    time->start(50);
}

void bullet::move()
{
        QList<QGraphicsItem *> colliding_items = collidingItems();
     for (int i = 0, n = colliding_items.size(); i < n; ++i){
         if (typeid(*(colliding_items[i])) == typeid(csieman)){
             csieman * superman = dynamic_cast<csieman *>(colliding_items[i]);
             superman->decrease(2);
             if(superman->health<=0){
             scene()->removeItem(colliding_items[i]);

             delete colliding_items[i];

}
              scene()->removeItem(this);
              delete this;
             return;
         }
         if (typeid(*(colliding_items[i])) == typeid(towerb)){
             towerb * B = dynamic_cast<towerb *>(colliding_items[i]);
             B->decrease(2);
             if(B->health<=0){
             scene()->removeItem(colliding_items[i]);

             delete colliding_items[i];

}
              scene()->removeItem(this);
              delete this;
             return;
         }
         if (typeid(*(colliding_items[i])) == typeid(towera)){
             towera * A = dynamic_cast<towera *>(colliding_items[i]);
             A->decrease(1);
             if(A->health<=0){
             scene()->removeItem(colliding_items[i]);
             delete colliding_items[i];
             play->gameoverlose();

}
              scene()->removeItem(this);
              delete this;
             return;

}
         if (typeid(*(colliding_items[i])) == typeid(dirtyman)){
              dirtyman * dirtyman87 = dynamic_cast<dirtyman *>(colliding_items[i]);
             dirtyman87->decrease(2);
             if(dirtyman87->health<=0){
             scene()->removeItem(colliding_items[i]);

             delete colliding_items[i];

}
             scene()->removeItem(this);
             delete this;
             return;
     }
         if (typeid(*(colliding_items[i])) == typeid(belle)){
              belle * beauty = dynamic_cast<belle *>(colliding_items[i]);
             beauty->decrease(2);
             if(beauty->health<=0){
             scene()->removeItem(colliding_items[i]);

             delete colliding_items[i];

}
             scene()->removeItem(this);
             delete this;
             return;
     }

         if (typeid(*(colliding_items[i])) == typeid(tank)){
             tank * fatman = dynamic_cast<tank *>(colliding_items[i]);
            fatman->decrease(2);
            if(fatman->health<=0){
            scene()->removeItem(colliding_items[i]);

            delete colliding_items[i];

}
            scene()->removeItem(this);
            delete this;


}
}
    double size=30;
    double theta = 180;
    double dy = size*qSin(qDegreesToRadians(theta));
    double dx = size*qCos(qDegreesToRadians(theta));
    setPos(x()+dx,y()+dy);

}


