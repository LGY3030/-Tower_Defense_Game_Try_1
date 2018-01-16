#include<towera.h>
#include<QPixmap>
#include<QVector>
#include<QPointF>
#include<QPolygonF>
#include<towerbomb.h>
#include<game.h>
#include<QTimer>
#include<QLineF>
#include"enemy.h"
    extern game * play;
towera::towera(QGraphicsItem *parent):QObject(), QGraphicsPixmapItem(parent)
{
    setPixmap(QPixmap(":/images/towerA.png"));

    QTimer * timer =new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(fire()));
    timer->start(1000);

}

void towera::fire()
{
    towerbomb * towerbombA = new towerbomb();
    towerbombA->setPos(128.5,180);

    play->scene->addItem(towerbombA);
}

void towera::decrease(int attacked)
{
    health=health-attacked;
}

