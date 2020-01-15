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

private:
    Ui::MainWindow *ui;
    Document m_content;
};

#endif // MAINWINDOW_HPP
