#include "FlowGraphView.hpp"
#include "FlowGraphScene.hpp"

FlowGraphView::FlowGraphView(FlowGraphScene * scene, QWidget * parent)
    : QGraphicsView(scene, parent), m_scene(scene)
{
    if(this->m_scene == Q_NULLPTR)
    {
        this->m_scene = new FlowGraphScene(this);
    }
    this->setScene(this->m_scene);
}

FlowGraphView::~FlowGraphView()
{

}
