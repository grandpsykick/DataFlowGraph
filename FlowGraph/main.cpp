#include "FlowGraphWindow.hpp"
#include <QApplication>

int main(int argc, char * argv[])
{
    QApplication app(argc, argv);

    FlowGraphWindow flowWindow;
    flowWindow.show();

    return app.exec();
}
