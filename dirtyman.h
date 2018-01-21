#ifndef DIRTYMAN_H
#define DIRTYMAN_H
#include<QGraphicsPixmapItem>
#include<QObject>
class dirtyman: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    dirtyman(QGraphicsItem * parent=0);
    void increase(int added);
    void decrease(int attacked);
    int health=10;
    QTimer * timer;
    QTimer * time;
public slots:
    void move_forward();
    void DIRTYMANattack();

};

#endif // DIRTYMAN_H
