#ifndef BELLEHEALB_H
#define BELLEHEALB_H

#include<QGraphicsPixmapItem>
#include<QObject>
class bellehealb: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    bellehealb(QGraphicsItem * parent=0);
public slots:
    void move();
private:
};


#endif // BELLEHEALB_H
