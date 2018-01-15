#include<enemy_towera.h>
#include<QPixmap>

enemy_towera::enemy_towera(QGraphicsItem *parent)
{
    setPixmap(QPixmap(":/images/enemy_towerA.png"));
   
}

void enemy_towera::decrease(int attacked)
{
    health= health-attacked;
    
}
