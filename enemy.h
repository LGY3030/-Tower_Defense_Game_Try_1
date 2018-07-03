#ifndef ENEMY_H
#define ENEMY_H
#include<QGraphicsPixmapItem>
#include<QObject>
class enemy: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    enemy(QGraphicsItem * parent=0);
    int decrease(int attacked);
    int health=10;
    QTimer * timer;
    QTimer * time;
public slots:
    void move_forward();
    void enemyattack();
private:


};

#endif // ENEMY_H
