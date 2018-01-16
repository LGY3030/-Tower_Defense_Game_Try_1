#ifndef TOWERB_H
#define TOWERB_H
#include<QGraphicsItem>
#include<QGraphicsPixmapItem>
class towerb: public QGraphicsPixmapItem{

public:
    towerb(QGraphicsItem * parent=0);

    int health=10;
    void decrease(int attacked);

};
#endif // TOWERB_H
