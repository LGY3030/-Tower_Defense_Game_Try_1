#ifndef TANKICON_H
#define TANKICON_H
#include<QGraphicsPixmapItem>
#include<QGraphicsSceneMouseEvent>
class tankicon: public QGraphicsPixmapItem{
public:
    tankicon(QGraphicsItem * parent=0);
    void mousePressEvent(QGraphicsSceneMouseEvent * event);
};

#endif // TANKICON_H
