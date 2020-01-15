#ifndef CATEGORYWIDGET_HPP
#define CATEGORYWIDGET_HPP

#include <QTreeWidget>

class CategoryWidget : public QTreeWidget
{
public:
    CategoryWidget(QWidget *parent = nullptr);
protected:
    void contextMenuEvent(QContextMenuEvent *event);
private:
    QMenu *m_menu;
    QAction *m_delete;
    QAction *m_add;
    QAction *m_move;
};

#endif // CATEGORYWIDGET_HPP
