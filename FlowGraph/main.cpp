#include "FlowGraphWindow.hpp"
#include <QApplication>

int main(int argc, char * argv[])
{
    // Initializing the Qt application event system
    QApplication app(argc, argv);

    // Creating the flow graph main window
    FlowGraphWindow flowWindow;
    flowWindow.show();

    // Executing the event system
    return app.exec();
}
