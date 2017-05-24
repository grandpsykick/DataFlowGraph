#ifndef FLOWGRAPHVIEW_HPP
#define FLOWGRAPHVIEW_HPP

#include <QGraphicsView>

class FlowGraphScene;

class FlowGraphView : public QGraphicsView
{
    Q_OBJECT

    public:
        // Public Constructor(s)/Destructor
        explicit FlowGraphView(FlowGraphScene * scene = Q_NULLPTR,
                               QWidget * parent = Q_NULLPTR);
        virtual ~FlowGraphView();

    private:
        // Private Data Member(s)
        FlowGraphScene * m_scene;
};

#endif // FLOWGRAPHVIEW_HPP
