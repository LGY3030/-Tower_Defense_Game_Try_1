#ifndef MISSILEA_H
#define MISSILEA_H
#include<QGraphicsPixmapItem>
#include<QObject>
class missileA: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    missileA(QGraphicsItem * parent=0);
public slots:
    void move();
private:
};

#endif // MISSILE_H
