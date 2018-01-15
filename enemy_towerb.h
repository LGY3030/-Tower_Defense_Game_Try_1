#ifndef ENEMY_TOWERB_H
#define ENEMY_TOWERB_H
#include<QGraphicsItem>
#include<QGraphicsPixmapItem>
class enemy_towerb: public QGraphicsPixmapItem{

public:
    enemy_towerb(QGraphicsItem * parent=0);

    int health=10;
    void decrease(int attacked);

};
#endif // ENEMY_TOWERB_H
