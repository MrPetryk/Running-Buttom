#include "joke.h"
#include <QDesktopWidget>
#include <QObject>
#include <QSound>
#include <QPalette>

QSound bells(":/new/File/zlobnyy-smeh-zlobnogo-cheloveka.wav");

Joke::Joke(QWidget *pwgt): QWidget(pwgt)
{
    //Declarate Window
    QPalette *pal = new QPalette;
    int deskHeight = 500;
    int deskWidth = 700;

    pal->setColor(QPalette::Background, Qt::blue);
    //Declarate Button
    button = new QPushButton(this);
    button->setText("&Click Me");
    button->resize(75, 25);
    button->move((deskWidth / 2), (deskHeight / 2));

    //Runing Button
    button->installEventFilter(this);

    // Show Window
    this->setPalette(*pal);
    this->setFixedSize(600,600);

    //if Push Button
    connect(button, SIGNAL(clicked(bool)), this, SLOT(close()));
}

bool Joke::eventFilter(QObject *obj, QEvent *ev)
{

    if(obj == button)
    {
        if(ev->type() == QEvent::Enter)
        {
            int x = qrand() % 550;
            int y = qrand() % 550;
            button->move(x, y);

            bells.play();
        }
    }
    return false;
}

