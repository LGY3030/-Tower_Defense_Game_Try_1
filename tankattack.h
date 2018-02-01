#ifndef TANKATTACK_H
#define TANKATTACK_H
#include<QGraphicsPixmapItem>
#include<QObject>
class tankattack: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    tankattack(QGraphicsItem * parent=0);
public slots:
    void move();
private:
};
#endif // TANKATTACK_H
