#ifndef BBOX_H
#define BBOX_H

#include<QGraphicsPolygonItem>
class BBox: public QGraphicsPolygonItem{
public:
    //constructoes
    BBox(QGraphicsItem * parent = NULL);

    //getters
    int getAttackOf(int side);

    //setters
    void setAttackOf(int side, int attrack);

private:
    QString owner;
    int side0Attack;

};

#endif // BBOX_H
