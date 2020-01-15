#include "mainwindow.hpp"
#include "ui_mainwindow.h"
#include <QWebChannel>
#include <QWebEnginePage>
#include <QTreeWidgetItem>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->mainSplitter->setStretchFactor(0, 1);
    ui->mainSplitter->setStretchFactor(1, 3);

    ui->contentSplitter->setStretchFactor(0, 1);
    ui->contentSplitter->setStretchFactor(1, 1);

    ui->preview->setContextMenuPolicy(Qt::NoContextMenu);

    QWebEnginePage *page = new QWebEnginePage(this);
    ui->preview->setPage(page);

    connect(ui->editor, &QPlainTextEdit::textChanged,
            [this]() { m_content.setText(ui->editor->toPlainText()); });

    QWebChannel *channel = new QWebChannel(this);
    channel->registerObject(QStringLiteral("content"), &m_content);
    page->setWebChannel(channel);

    ui->preview->setUrl(QUrl("qrc:/index.html"));

    QFile defaultTextFile(":/default.md");
    defaultTextFile.open(QIODevice::ReadOnly);
    ui->editor->setPlainText(defaultTextFile.readAll());

    QTreeWidget* newTree = ui->catalogTreeWidget;
    QTreeWidgetItem *item1 = new QTreeWidgetItem(newTree);	//创建第一个父节点
    item1->setText(0,"111");
    item1->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
    //Qt::ItemIsSelectable表示可选的
    //Qt::ItemIsUserCheckable项目上是否有复选框
    //Qt::ItemIsEnabled 项目上是否没有被禁用（Enabled可用/Disabled禁用）
    QTreeWidgetItem *item1_1 = new QTreeWidgetItem(item1);		//添加子节点
    item1_1->setText(0,"111_111");
    item1_1->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);

    QTreeWidgetItem *item1_2 = new QTreeWidgetItem(item1);
    item1_2->setText(0,"111_222");
    item1_2->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);

    QTreeWidgetItem *item1_3 = new QTreeWidgetItem(item1);
    item1_3->setText(0,"111_333");
    item1_3->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);

    QTreeWidgetItem *item2 = new QTreeWidgetItem(newTree);
    item2->setText(0,"222");
    item2->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);

    QTreeWidgetItem *item2_1 = new QTreeWidgetItem(item2);
    item2_1->setText(0,"222_222");
    item2_1->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
}

MainWindow::~MainWindow()
{
    delete ui;
}
