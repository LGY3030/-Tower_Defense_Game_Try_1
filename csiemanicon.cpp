#include<csiemanicon.h>
#include<csieman.h>
#include<game.h>
extern game * play;
csiemanicon::csiemanicon(QGraphicsItem *parent)
{
    setPixmap(QPixmap(":/images/csiemanicon.png"));
}

void csiemanicon::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    csieman * superman = new csieman();
    play->scene->addItem(superman);
    superman->setPos(307,200);
}
