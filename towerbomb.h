#ifndef TOWERBOMB_H
#define TOWERBOMB_H
#include<QGraphicsPixmapItem>
#include<QObject>
class towerbomb: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    towerbomb(QGraphicsItem * parent=0);
public slots:
    void move();
private:
};

#endif // TOWERBOMB_H
