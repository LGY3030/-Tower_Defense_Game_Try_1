#include<game.h>
#include<towera.h>
#include<missileA.h>
#include<enemy_towera.h>
#include<enemy.h>
#include<stdlib.h>
#include<qtimer.h>
#include<csieman.h>
#include<tank.h>
#include<dirtyman.h>
#include<belle.h>
#include<tankicon.h>
#include<belleicon.h>
#include<dirtymanicon.h>
#include<csiemanicon.h>
#include<QTimer>
#include<QTextDocument>
#include<win.h>
#include<lose.h>
#include<towerb.h>
#include<enemy_towerb.h>
game::game()
{

   scene = new QGraphicsScene(this);
   scene->setSceneRect(0,0,1800,800);
   setScene(scene);
   setFixedSize(1800,800);

   towera * A = new towera();
   A->setPos(0,180);
   scene->addItem(A);

   towerb * B = new towerb();
   B->setPos(300,180);
   scene->addItem(B);

   enemy_towera * enemy_A = new enemy_towera();
   enemy_A->setPos(1543,180);
   scene->addItem(enemy_A);

   enemy_towerb * enemy_B = new enemy_towerb();
   enemy_B->setPos(1243,180);
   scene->addItem(enemy_B);

   csiemanicon * supermanicon = new csiemanicon();
   scene->addItem(supermanicon);
   supermanicon->setPos(415,518);

   tankicon * fatmanicon = new tankicon();
   scene->addItem(fatmanicon);
   fatmanicon->setPos(10,500);

   belleicon * beautyicon = new belleicon();
   scene->addItem(beautyicon);
   beautyicon->setPos(210,510);

   dirtymanicon * dirtyman87icon = new dirtymanicon();
   scene->addItem(dirtyman87icon);
   dirtyman87icon->setPos(650,520);

   QTimer * createnemytimer = new QTimer(this);
   connect(createnemytimer,SIGNAL(timeout()),this,SLOT(createnemy()));
   createnemytimer->start(2000);

   setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   setBackgroundBrush(QBrush(QImage(":/images/background.jpg")));

   }

void game::keyPressEvent(QKeyEvent *event)
{

    if(event->key() == Qt::Key_Space){
    missileA * missileAfire = new missileA();
    missileAfire->setPos(x()+300,y()+100);
    missileAfire->setRotation(110);
    scene->addItem(missileAfire);

    }
}

void game::gameoverwin()
{

    for (size_t i = 0, n = scene->items().size(); i < n; i++){
            scene->items()[i]->setEnabled(false);
        }
    drawpanel(0,0,1800,800,Qt::black,0.65);


    win * gamewin = new win();
    gamewin->setPos(700,250);
    scene->addItem(gamewin);

}

void game::gameoverlose()
{
    for (size_t i = 0, n = scene->items().size(); i < n; i++){
            scene->items()[i]->setEnabled(false);

        }
    drawpanel(0,0,1800,800,Qt::black,0.65);


    lose * gamelose = new lose();
    gamelose->setPos(700,250);
    scene->addItem(gamelose);

}

void game::drawpanel(int x, int y, int width, int height, QColor color, double opacity)
{
    QGraphicsRectItem* panel = new QGraphicsRectItem(x,y,width,height);
       QBrush brush;
       brush.setStyle(Qt::SolidPattern);
       brush.setColor(color);
       panel->setBrush(brush);
       panel->setOpacity(opacity);
       scene->addItem(panel);
}







void game::createnemy()
{
    enemy * zombie = new enemy();
    scene->addItem(zombie);
    zombie->setPos(1493,200);
}
