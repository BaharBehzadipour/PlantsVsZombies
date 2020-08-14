#include "Score.h"
#include <QFont>


Score::Score(QGraphicsItem *parent)
    : QGraphicsTextItem (parent) , playerScore{0}
{
    setPlainText(QString::number(playerScore));
    setDefaultTextColor(Qt::black);
    setFont(QFont("times",25));
}
