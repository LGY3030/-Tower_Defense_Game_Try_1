#include<tankicon.h>
#include<tank.h>
#include<game.h>
extern game * play;
tankicon::tankicon(QGraphicsItem *parent)
{
    setPixmap(QPixmap(":/images/tankicon.png"));
}

void tankicon::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    tank * fatman = new tank();
    play->scene->addItem(fatman);
    fatman->setPos(307,200);
}
