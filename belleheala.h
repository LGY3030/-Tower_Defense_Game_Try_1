#ifndef BELLEHEALA_H
#define BELLEHEALA_H
#include<QGraphicsPixmapItem>
#include<QObject>
class belleheala: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    belleheala(QGraphicsItem * parent=0);
public slots:
    void move();
private:
};
#endif // BELLEHEALA_H
