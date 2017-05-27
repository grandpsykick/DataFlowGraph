#include "FlowGraphWindow.hpp"
#include "ui_FlowGraphWindow.h"
#include "FlowGraphScene.hpp"
#include "FlowGraphView.hpp"
#include "FlowGraphNode.hpp"

FlowGraphWindow::FlowGraphWindow(FlowGraphScene * scene, FlowGraphView * view,
                                 QWidget * parent)
    : QMainWindow(parent), ui(new Ui::FlowGraphWindow), m_scene(scene), m_view(view)
{
    ui->setupUi(this);

    if(this->m_scene == Q_NULLPTR)
    {
        this->m_view = new FlowGraphView(Q_NULLPTR, this);
        this->setCentralWidget(this->m_view);
        this->m_scene = dynamic_cast<FlowGraphScene*>(this->m_view->scene());
        this->m_scene->addItem(new FlowGraphNode());
    }
}

FlowGraphWindow::~FlowGraphWindow()
{
    delete ui;
}
