#include "FlowGraphWindow.hpp"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FlowGraphWindow w;
    w.show();

    return a.exec();
}
