#include<dirtymanattack.h>
#include<QTimer>
#include<qmath.h>
#include"game.h"
#include<dirtyman.h>
#include<enemy_towera.h>
#include<enemy.h>
#include<enemy_towerb.h>
    extern game * play;
dirtyman::dirtyman(QGraphicsItem *parent)
{
    setPixmap(QPixmap(":/images/dirtyman.png"));

    time = new QTimer(this);
    connect(time,SIGNAL(timeout()),this,SLOT(move_forward()));
    time->start(100);
    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(DIRTYMANattack()));
    timer->start(1000);
}

void dirtyman::increase(int added)
{
    health= health+added;
}
void dirtyman::decrease(int attacked)
{
    health= health-attacked;
}


void dirtyman::move_forward()
{

    double size=5;
    double theta = 0;
    double dx = size*qCos(qDegreesToRadians(theta));
    setPos(x()+dx,y());
    QList<QGraphicsItem *> colliding_items = collidingItems();
       for (int i = 0, n = colliding_items.size(); i < n; ++i){

           if (typeid(*(colliding_items[i])) == typeid(enemy)){
              time->disconnect();
           }
           if (typeid(*(colliding_items[i])) == typeid(enemy_towera)){
              time->disconnect();
           }
           if (typeid(*(colliding_items[i])) == typeid(enemy_towerb)){
              time->disconnect();
           }
}
}
void dirtyman::DIRTYMANattack()
{

        dirtymanattack * dirtymanmanattackbullet = new dirtymanattack();
        dirtymanmanattackbullet->setPos(x()+90,y()+25);
        play->scene->addItem(dirtymanmanattackbullet);
    }
