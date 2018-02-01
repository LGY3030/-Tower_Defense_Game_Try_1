#ifndef TANK_H
#define TANK_H
#include<QGraphicsPixmapItem>
#include<QObject>
class tank: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    tank(QGraphicsItem * parent=0);
    void increase(int added);
    void decrease(int attacked);
    int health=10;
    QTimer * timer;
    QTimer * time;
public slots:
    void move_forward();
    void TANKattack();

};
#endif // TANK_H
