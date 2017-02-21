#include "joke.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Joke w;
    w.show();

    return a.exec();
}
