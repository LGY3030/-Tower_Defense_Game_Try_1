#include<missileA.h>
#include<QPixmap>
#include<QTimer>
#include<qmath.h>
missileA::missileA(QGraphicsItem *parent)
{
    setPixmap(QPixmap(":/images/missile.png"));
    QTimer * time = new QTimer(this);
    connect(time,SIGNAL(timeout()),this,SLOT(move()));
    time->start(50);
}

void missileA::move()
{
    double size=30;
    double theta = 10;
    double dy = size*qSin(qDegreesToRadians(theta));
    double dx = size*qCos(qDegreesToRadians(theta));
    setPos(x()+dx,y()+dy);

}

