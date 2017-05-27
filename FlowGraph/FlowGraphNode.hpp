#ifndef FLOWGRAPHNODE_HPP
#define FLOWGRAPHNODE_HPP

#include <QGraphicsObject>

class FlowGraphNode : public QGraphicsObject
{
    public:
        // Public Constructor(s)/Destructor
        explicit FlowGraphNode(QGraphicsItem * parent = Q_NULLPTR);
        virtual ~FlowGraphNode();

        // Public Graphics Method(s)
        QRectF boundingRect() const;
        void paint(QPainter * painter, const QStyleOptionGraphicsItem * option,
                   QWidget * widget);

    private:
        // Private State Variable(s)
        qreal m_penWidth;
        qreal m_edgeRadius;
        qreal m_height;
        qreal m_width;
        QColor m_backgroundColor;
        QColor m_edgeColor;
};

#endif // FLOWGRAPHNODE_HPP
