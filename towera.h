#ifndef TOWERA_H
#define TOWERA_H
#include<QGraphicsItem>
#include<QGraphicsPolygonItem>
#include<QGraphicsPixmapItem>
#include<QObject>
class towera: public QObject ,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    towera(QGraphicsItem * parent=0);

    int health=10;
    void decrease(int attacked);
public slots:

    void fire();

};

#endif // TOWERA_H
