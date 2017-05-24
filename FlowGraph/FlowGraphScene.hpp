#ifndef FLOWGRAPHSCENE_HPP
#define FLOWGRAPHSCENE_HPP

#include <QGraphicsScene>

class FlowGraphScene : public QGraphicsScene
{
    Q_OBJECT

    public:
        // Public Constructor(s)/Destructor
        explicit FlowGraphScene(QObject * parent = Q_NULLPTR);
        virtual ~FlowGraphScene();
};

#endif // FLOWGRAPHSCENE_HPP
