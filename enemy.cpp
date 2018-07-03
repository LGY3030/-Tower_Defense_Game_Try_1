#include<enemy.h>
#include<QTimer>
#include<qmath.h>
#include<bullet.h>
#include"game.h"
#include<belle.h>
#include<csieman.h>
#include<towera.h>
#include<tank.h>
#include<dirtyman.h>
#include<towerb.h>
    extern game * play;
enemy::enemy(QGraphicsItem *parent)
{
    setPixmap(QPixmap(":/images/enemy.png"));

    time = new QTimer(this);
    connect(time,SIGNAL(timeout()),this,SLOT(move_forward()));
    time->start(100);
    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(enemyattack()));
    timer->start(1000);
}

int enemy::decrease(int attacked)
{
    health= health-attacked;
    return health;
}

void enemy::move_forward()
{

    double size=10;
    double theta = 0;
    double dx = size*qCos(qDegreesToRadians(theta));
    setPos(x()-dx,y());
    QList<QGraphicsItem *> colliding_items = collidingItems();
       for (int i = 0, n = colliding_items.size(); i < n; ++i){


           if (typeid(*(colliding_items[i])) == typeid(towera)){
              time->disconnect();
           }

           if (typeid(*(colliding_items[i])) == typeid(csieman)){
              time->disconnect();
           }
           if (typeid(*(colliding_items[i])) == typeid(dirtyman)){
              time->disconnect();
           }

           if (typeid(*(colliding_items[i])) == typeid(belle)){
              time->disconnect();
           }
           if (typeid(*(colliding_items[i])) == typeid(tank)){
              time->disconnect();
           }
           if (typeid(*(colliding_items[i])) == typeid(towerb)){
              time->disconnect();
           }

}
}

void enemy::enemyattack()
{

        bullet * enemybullet = new bullet();
        enemybullet->setPos(x(),y()+90);
        play->scene->addItem(enemybullet);
    }

