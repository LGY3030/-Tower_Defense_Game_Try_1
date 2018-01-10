#include <QApplication>
#include<game.h>
game * play;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    play = new game();
    play->show();

    return a.exec();
}
