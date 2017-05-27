#include "FlowGraphNode.hpp"
#include <QPainter>
#include <QStyleOptionGraphicsItem>
#include <QWidget>

FlowGraphNode::FlowGraphNode(QGraphicsItem * parent)
    : m_penWidth(2.0), m_edgeRadius(5.0), m_height(60.0), m_width(60.0),
      m_backgroundColor(255, 0, 0), m_edgeColor(0, 0, 0)
{
    this->setCacheMode(QGraphicsItem::NoCache);
    this->setFlags(QGraphicsItem::ItemIsMovable | QGraphicsItem::ItemIsSelectable |
                   QGraphicsItem::ItemIsFocusable);
}

FlowGraphNode::~FlowGraphNode()
{

}

QRectF FlowGraphNode::boundingRect() const
{
    return QRectF(- this->m_penWidth / 2.0, - this->m_penWidth / 2.0,
                  this->m_height + this->m_penWidth, this->m_width + this->m_penWidth);
}

void FlowGraphNode::paint(QPainter * painter,
                          const QStyleOptionGraphicsItem * option,
                          QWidget * widget)
{
    painter->setPen(this->m_edgeColor);
    painter->setBrush(QBrush(this->m_backgroundColor));
    painter->drawRoundedRect(0.0, 0.0, this->m_height, this->m_width,
                             this->m_edgeRadius, this->m_edgeRadius);
}
