#ifndef FLOWGRAPHWINDOW_HPP
#define FLOWGRAPHWINDOW_HPP

#include <QMainWindow>

namespace Ui
{
    class FlowGraphWindow;
}

class FlowGraphWindow : public QMainWindow
{
    Q_OBJECT

    public:
        // Public Constructor(s)/Destructor
        explicit FlowGraphWindow(QWidget * parent = nullptr);
        virtual ~FlowGraphWindow();

    private:
        Ui::FlowGraphWindow * ui;
};

#endif // FLOWGRAPHWINDOW_HPP
