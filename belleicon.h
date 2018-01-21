#ifndef BELLEICON_H
#define BELLEICON_H
#include<QGraphicsPixmapItem>
#include<QGraphicsSceneMouseEvent>
class belleicon: public QGraphicsPixmapItem{
public:
    belleicon(QGraphicsItem * parent=0);
    void mousePressEvent(QGraphicsSceneMouseEvent * event);
};

#endif // BELLEICON_H
