#ifndef BBOXBOARD_H
#define BBOXBOARD_H


#include<QList>
#include "bbox.h"

class BBoxBoard{
public:
    //constructors
    BBoxBoard();

    //getters/setters
    QList<BBox*> getBoxes();

    //public methoss
    void placeBBoxes(int x, int y, int cols, int rows);
private:
    void creatBBoxColumn(int x, int y, int numOfRows);
    QList<BBox*> BBoxes;
};

#endif // BBOXBOARD_H
