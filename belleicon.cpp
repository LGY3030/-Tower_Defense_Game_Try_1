#include<belleicon.h>
#include<belle.h>
#include<game.h>
extern game * play;
belleicon::belleicon(QGraphicsItem *parent)
{
    setPixmap(QPixmap(":/images/belleicon.png"));
}

void belleicon::mousePressEvent(QGraphicsSceneMouseEvent *event)
{

    belle * beauty = new belle();
    play->scene->addItem(beauty);
    beauty->setPos(307,200);
}
