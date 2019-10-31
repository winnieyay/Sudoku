#ifndef GAME_H
#define GAME_H


#include<QGraphicsView>
#include<QGraphicsScene>
#include<QObject>
#include"BBoxBoard.h"

class Game: public QGraphicsView{
    Q_OBJECT //because the public slots
public:
    //constructors
    Game(QWidget* parent=NULL);

    //public methods

    void displayMainMenu();

    //public attributes
    QGraphicsScene * scene;
    BBoxBoard* bboxBoard;
    QString whoseTurn;

public slots:
    void start();
};

#endif // GAME_H
