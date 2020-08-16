#ifndef MENU_H
#define MENU_H

#include <QObject>
#include <QTimer>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QMediaPlayer>
#include "Level1Button.h"
#include "Level2Button.h"

class Menu : public QGraphicsView
{
    Q_OBJECT

private:
    QGraphicsScene *menuScene;
    QMediaPlayer * menuMusic;
    QTimer *menuTimer;
    Level1Button *l1;
    Level2Button *l2;

public:
    explicit Menu();
    ~Menu();

signals:

public slots:
    void menuSchedule();
};

#endif // MENU_H
