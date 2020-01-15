#include "categorywidget.hpp"
#include <QMenu>
#include <QContextMenuEvent>

CategoryWidget::CategoryWidget(QWidget *parent)
{
    this->setParent(parent);

    m_menu = new QMenu(this);

    m_delete = m_menu->addAction("Delete");
    m_add = m_menu->addAction("Add");
    m_move = m_menu->addAction("Move");
}


void CategoryWidget::contextMenuEvent(QContextMenuEvent *event) {
    QTreeWidgetItem *currentItem = this->currentItem();
    if(currentItem == nullptr) {
        m_menu->exec(QCursor::pos());
    } else {
        m_menu->exec(QCursor::pos());
    }
    event->accept();
}
