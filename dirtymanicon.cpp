#include<dirtymanicon.h>
#include<dirtyman.h>
#include<game.h>
extern game * play;
dirtymanicon::dirtymanicon(QGraphicsItem *parent)
{
    setPixmap(QPixmap(":/images/dirtymanicon.png"));
}

void dirtymanicon::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    dirtyman * dirtyman87 = new dirtyman();
    play->scene->addItem(dirtyman87);
    dirtyman87->setPos(307,310);
}
