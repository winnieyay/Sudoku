#include "BBoxBoard.h"
#include "Game.h"

extern Game* game;
BBoxBoard::BBoxBoard()
{

}

QList<BBox *> BBoxBoard::getBoxes()
{
    return BBoxes;
}

void BBoxBoard::placeBBoxes(int x, int y, int cols, int rows)
{
    int X_SHIFT = 30;

    for(size_t i=0, n=cols; i<n; i++){
         creatBBoxColumn(x+X_SHIFT*i, y, rows);
    }
}

void BBoxBoard::creatBBoxColumn(int x, int y, int numOfRows)
{
    //create a column of BBoxes
    for(size_t i=0, n = numOfRows; i<n; i++){
        BBox * bbox = new BBox();
        bbox->setPos(x,y+30*i);
        BBoxes.append(bbox);
        game->scene->addItem(bbox);

    }
}
