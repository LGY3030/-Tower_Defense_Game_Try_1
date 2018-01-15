#ifndef ENEMY_TOWERA_H
#define ENEMY_TOWERA_H
#include<QGraphicsItem>
#include<QGraphicsPolygonItem>
#include<QGraphicsPixmapItem>

class enemy_towera: public QGraphicsPixmapItem{
public:
    enemy_towera(QGraphicsItem * parent=0);
    void decrease(int attacked);
    int health=10;
private:
    QGraphicsPolygonItem * attack_area;
};


#endif // ENEMY_TOWERA_H
