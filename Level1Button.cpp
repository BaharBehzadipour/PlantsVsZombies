#include "Level1Button.h"

Level1Button::Level1Button(QGraphicsScene *Scene) : Scene{Scene}
{  
    clickl1 =false;

    //set picture
    setPixmap(QPixmap(":/images/level1.png"));

    //add to scene
    Scene->addItem(this);
    setPos(510,340);


    //create play button music
       Level1ButtonMusic = new QMediaPlayer();
       Level1ButtonMusic->setMedia(QUrl("qrc:/music/shooter.mp3"));
}