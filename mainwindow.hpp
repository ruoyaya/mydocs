#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include "document.hpp"
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void readCategories();
protected:
    void contextMenuEvent(QContextMenuEvent *event);
private slots:
    void on_markdownEditButton_clicked();

private:
    Ui::MainWindow *ui;
    Document m_content;
};

#endif // MAINWINDOW_HPP
