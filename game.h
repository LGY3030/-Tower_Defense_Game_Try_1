#ifndef GAME_H
#define GAME_H
#include<QGraphicsScene>
#include<QGraphicsView>
#include<QKeyEvent>

class game: public QGraphicsView{
     Q_OBJECT
public:
    game();
    QGraphicsScene * scene;

    void keyPressEvent(QKeyEvent *event);
    void gameoverwin();
    void gameoverlose();
    void displaygameoverwindow(QString textToDisplay);
    void getenemy();
public slots:
    void createnemy();
private:
     void drawpanel(int x, int y, int width, int height, QColor color, double opacity);
};

#endif // GAME_H
