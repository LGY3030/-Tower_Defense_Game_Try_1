#ifndef BELLEHEALC_H
#define BELLEHEALC_H
#include<QGraphicsPixmapItem>
#include<QObject>
class bellehealc: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    bellehealc(QGraphicsItem * parent=0);
public slots:
    void move();
private:
};

#endif // BELLEHEALC_H
