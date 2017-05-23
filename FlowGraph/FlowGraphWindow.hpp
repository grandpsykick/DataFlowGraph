#ifndef FLOWGRAPHWINDOW_HPP
#define FLOWGRAPHWINDOW_HPP

#include <QMainWindow>

namespace Ui {
    class FlowGraphWindow;
}

class FlowGraphWindow : public QMainWindow
{
        Q_OBJECT

    public:
        explicit FlowGraphWindow(QWidget *parent = 0);
        ~FlowGraphWindow();

    private:
        Ui::FlowGraphWindow *ui;
};

#endif // FLOWGRAPHWINDOW_HPP
