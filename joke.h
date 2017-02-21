#ifndef JOKE_H
#define JOKE_H
#include <QtGui>
#include <QWidget>
#include <QPushButton>
#include <QObject>


class Joke: public QWidget
{
    Q_OBJECT

private:
    QPushButton *button;

protected:
 /*  virtual */ bool eventFilter(QObject *, QEvent *);

public:
    Joke(QWidget *pwgt = 0);

};




#endif // JOKE_H
