#ifndef BELLE_H
#define BELLE_H
#include<QGraphicsPixmapItem>
#include<QObject>
class belle: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    belle(QGraphicsItem * parent=0);
    void decrease(int attacked);
    int health=10;
    QTimer * timer;
    QTimer * time;
public slots:
    void move_forward();
    void BELLEheal();

};
#endif // BELLE_H
