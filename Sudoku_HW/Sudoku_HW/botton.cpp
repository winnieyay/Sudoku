#include "button.h"
#include <QGraphicsTextItem>
#include <QBrush>
Button::Button(QString name, QGraphicsItem *parent):QGraphicsRectItem(parent){
    //draw the rect
    setRect(0,0,200,50);
    QBrush brush;
    brush.setStyle(Qt::SolidPattern);
    brush.setColor(Qt::darkCyan);
    setBrush(brush);

    //draw the text
    QGraphicsTextItem * text = new QGraphicsTextItem(name, this);
    int xPos = rect().width()/2 - text->boundingRect().width()/2;
    int yPos = rect().height()/2 - text->boundingRect().height()/2;
    text->setPos(xPos, yPos);

    //allows reponding to hover events
    setAcceptHoverEvents(true);
}

void Button::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    emit clicked();
}

void Button::hoverEnterEvent(QGraphicsSceneHoverEvent *event)
{
    //change color
    QBrush brush;
    brush.setStyle(Qt::SolidPattern);
    brush.setColor(Qt::darkYellow);
    setBrush(brush);

}

void Button::hoverLeaveEvent(QGraphicsSceneHoverEvent *event)
{
    //change color
    QBrush brush;
    brush.setStyle(Qt::SolidPattern);
    brush.setColor(Qt::darkCyan);
    setBrush(brush);
}
