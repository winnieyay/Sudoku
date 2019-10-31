#include "Game.h"
#include "BBoxBoard.h"
#include "Button.h"
#include <QGraphicsTextItem>
Game::Game(QWidget *parent){
    //set up the screen
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(1024,768);

    //set up the scene
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,1024,768);
    setScene(scene);

}
void Game::start(){
    //create the screen
    scene->clear();

    //test code TODO remove
    bboxBoard = new BBoxBoard();
    bboxBoard->placeBBoxes(100,100,9,9);
}

void Game::displayMainMenu()
{
    //create the title text
    QGraphicsTextItem * titleText = new QGraphicsTextItem(QString("wally"));
    QFont titleFont("comic", 50);
    titleText->setFont(titleFont);
    int txPos = this->width()/2 - titleText->boundingRect().width()/2;
    int tyPos = 150;
    titleText->setPos(txPos, tyPos);
    scene->addItem(titleText);

    //create the play Button
    Button * PlayButton = new Button(QString("Play"));
    int bxPos = this->width()/2 - PlayButton->boundingRect().width()/2;
    int byPos = 275;
    titleText->setPos(bxPos, byPos);
    connect(PlayButton, SIGNAL(clicked()), this, SLOT(start()));
    scene->addItem(PlayButton);

    //create the Quit Button
    Button * QuitButton = new Button(QString("Quit"));
    int qxPos = this->width()/2 - QuitButton->boundingRect().width()/2;
    int qyPos = 350;
    titleText->setPos(qxPos, qyPos);
    connect(QuitButton, SIGNAL(clicked()), this, SLOT(close()));
    scene->addItem(QuitButton);
}
