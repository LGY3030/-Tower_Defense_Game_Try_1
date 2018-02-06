#ifndef CSIEMANICON_H
#define CSIEMANICON_H
#include<QGraphicsPixmapItem>
#include<QGraphicsSceneMouseEvent>
class csiemanicon: public QGraphicsPixmapItem{
public:
    csiemanicon(QGraphicsItem * parent=0);
    void mousePressEvent(QGraphicsSceneMouseEvent * event);
};

#endif // CSIEMANICON_H
