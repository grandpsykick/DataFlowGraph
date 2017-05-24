#ifndef FLOWGRAPHWINDOW_HPP
#define FLOWGRAPHWINDOW_HPP

#include <QMainWindow>

namespace Ui
{
    class FlowGraphWindow;
}

class FlowGraphView;
class FlowGraphScene;

class FlowGraphWindow : public QMainWindow
{
    Q_OBJECT

    public:
        // Public Constructor(s)/Destructor
        explicit FlowGraphWindow(FlowGraphScene * scene = Q_NULLPTR,
                                 FlowGraphView * view = Q_NULLPTR,
                                 QWidget * parent = Q_NULLPTR);
        virtual ~FlowGraphWindow();

    private:
        // Private Data Member(s)
        FlowGraphScene * m_scene;
        FlowGraphView * m_view;

        // Private Graphics Interface
        Ui::FlowGraphWindow * ui;
};

#endif // FLOWGRAPHWINDOW_HPP
