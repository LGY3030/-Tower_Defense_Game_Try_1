#include<belleheala.h>
#include<bellehealb.h>
#include<bellehealc.h>
#include<QTimer>
#include<qmath.h>
#include"game.h"
#include<belle.h>
#include<enemy.h>
#include<csieman.h>
#include<enemy_towera.h>
#include<tank.h>
#include<dirtyman.h>
#include<enemy_towerb.h>
    extern game * play;
belle::belle(QGraphicsItem *parent)
{
    setPixmap(QPixmap(":/images/belle.png"));

    time = new QTimer(this);
    connect(time,SIGNAL(timeout()),this,SLOT(move_forward()));
    time->start(100);

    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(BELLEheal()));
    timer->start(1000);

}

void belle::decrease(int attacked)
{
    health= health-attacked;
}

void belle::move_forward()
{

    double size=1;
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

           if (typeid(*(colliding_items[i])) == typeid(csieman)){
              time->disconnect();
           }
           if (typeid(*(colliding_items[i])) == typeid(dirtyman)){
              time->disconnect();
           }

           if (typeid(*(colliding_items[i])) == typeid(tank)){
              time->disconnect();
           }
           if (typeid(*(colliding_items[i])) == typeid(enemy_towerb)){
              time->disconnect();
           }


}
}
void belle::BELLEheal()
{

        belleheala * bellehealabullet = new belleheala();
        bellehealabullet->setPos(x()+150,y()+35);
        play->scene->addItem(bellehealabullet);
        bellehealb * bellehealbbullet = new bellehealb();
        bellehealbbullet->setPos(x()+150,y()+35);
        play->scene->addItem(bellehealbbullet);
        bellehealc * bellehealcbullet = new bellehealc();
        bellehealcbullet->setPos(x()+150,y()+35);
        play->scene->addItem(bellehealcbullet);
    }
