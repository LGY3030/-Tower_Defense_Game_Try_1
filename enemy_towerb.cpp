#include<enemy_towerb.h>
#include<QPixmap>
enemy_towerb::enemy_towerb(QGraphicsItem *parent): QGraphicsPixmapItem(parent)
{
    setPixmap(QPixmap(":/images/enemy_towerB.png"));


}
void enemy_towerb::decrease(int attacked)
{
    health=health-attacked;
}
