#include<tank.h>
#include<QTimer>
#include<qmath.h>
#include"game.h"
#include<tankattack.h>
#include<enemy_towera.h>
#include<enemy.h>
#include<enemy_towerb.h>
    extern game * play;
tank::tank(QGraphicsItem *parent)
{
    setPixmap(QPixmap(":/images/tank.png"));

    time = new QTimer(this);
    connect(time,SIGNAL(timeout()),this,SLOT(move_forward()));
    time->start(100);
    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(TANKattack()));
    timer->start(1000);
}

void tank::increase(int added)
{
    health= health+added;
}

void tank::decrease(int attacked)
{
    health= health-attacked;
}


void tank::move_forward()
{

    double size=10;
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
void tank::TANKattack()
{

        tankattack * tankattackbullet = new tankattack();
        tankattackbullet->setPos(x()+210,y()+35);
        play->scene->addItem(tankattackbullet);
    }
