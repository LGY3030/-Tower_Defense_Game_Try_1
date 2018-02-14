#ifndef DIRTYMANATTACK_H
#define DIRTYMANATTACK_H
#include<QGraphicsPixmapItem>
#include<QObject>
class dirtymanattack: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    dirtymanattack(QGraphicsItem * parent=0);
public slots:
    void move();
private:
};
#endif // DIRTYMANATTACK_H
