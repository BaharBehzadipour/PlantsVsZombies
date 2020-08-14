#include "Score.h"
#include <QFont>


Score::Score(QGraphicsItem *parent)
    : QGraphicsTextItem (parent) , playerScore{0}
{
    setPlainText(QString::number(playerScore));
    setDefaultTextColor(Qt::black);
    setFont(QFont("times",25));
}


void Score::addToScore(int s)
{
    playerScore +=s;
    setPlainText(QString::number(playerScore));
}