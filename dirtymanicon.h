#ifndef DIRTYMANICON_H
#define DIRTYMANICON_H
#include<QGraphicsPixmapItem>
#include<QGraphicsSceneMouseEvent>
class dirtymanicon: public QGraphicsPixmapItem{
public:
    dirtymanicon(QGraphicsItem * parent=0);
    void mousePressEvent(QGraphicsSceneMouseEvent * event);
};

#endif // DIRTYMANICON_H
