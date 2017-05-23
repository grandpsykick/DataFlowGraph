#include "FlowGraphWindow.hpp"
#include "ui_FlowGraphWindow.h"

FlowGraphWindow::FlowGraphWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FlowGraphWindow)
{
    ui->setupUi(this);
}

FlowGraphWindow::~FlowGraphWindow()
{
    delete ui;
}
