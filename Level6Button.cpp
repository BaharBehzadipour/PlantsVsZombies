#include "Level6Button.h"

Level6Button::Level6Button(QGraphicsScene *Scene)  : level6Scene{Scene}
{
    clickl6 = false;

    //set picture
    setPixmap(QPixmap(":/images/level6.png"));

    //add to scene
    Scene->addItem(this);

    //setPos
    setPos(540,477);

    //create level5 button music
       level6ButtonMusic = new QMediaPlayer();
       level6ButtonMusic->setMedia(QUrl("qrc:/music/shooter.mp3"));

}
