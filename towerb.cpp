#include<towerb.h>
#include<QPixmap>
towerb::towerb(QGraphicsItem *parent): QGraphicsPixmapItem(parent)
{
    setPixmap(QPixmap(":/images/towerB.png"));


}
void towerb::decrease(int attacked)
{
    health=health-attacked;
}
