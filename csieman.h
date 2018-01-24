#ifndef CSIEMAN_H
#define CSIEMAN_H
#include<QGraphicsPixmapItem>
#include<QObject>
class csieman: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    csieman(QGraphicsItem * parent=0);
    void increase(int added);
    void decrease(int attacked);
    int health=10;
    QTimer * time;
    QTimer * timer;

public slots:
    void move_forward();
    void CSIEmanattack();

};

#endif // CSIEMAN_H
