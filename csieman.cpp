#include<csiemanattack.h>
#include<QTimer>
#include<qmath.h>
#include"game.h"
#include<csieman.h>
#include<enemy.h>
#include<enemy_towera.h>
#include<enemy_towerb.h>
    extern game * play;
csieman::csieman(QGraphicsItem *parent)
{
    setPixmap(QPixmap(":/images/CSIEman.png"));

    time = new QTimer(this);
    connect(time,SIGNAL(timeout()),this,SLOT(move_forward()));
    time->start(100);
    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(CSIEmanattack()));
    timer->start(1000);

}

void csieman::increase(int added)
{
    health= health+added;
}

void csieman::decrease(int attacked)
{
    health= health-attacked;
}


void csieman::move_forward()
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

void csieman::CSIEmanattack()
{

        csiemanattack * csiemanattackbullet = new csiemanattack();
        csiemanattackbullet->setPos(x()+210,y()+35);
        play->scene->addItem(csiemanattackbullet);

    }
