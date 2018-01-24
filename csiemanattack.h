#ifndef CSIEMANATTACK_H
#define CSIEMANATTACK_H
#include<QGraphicsPixmapItem>
#include<QObject>

class csiemanattack: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    csiemanattack(QGraphicsItem * parent=0);

public slots:
    void move();
private:
};
#endif // CSIEMANATTACK_H
