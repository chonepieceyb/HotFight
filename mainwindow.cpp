#include "mainwindow.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QGraphicsView(parent)
{
    //初始化QGraphicsView对象

    // 初始化QGraphicsScene对象
    m_scene = new QGraphicsScene(this);
    m_scene->addItem(&item);
    m_scene->addItem(&item2);
    item.setFocus();
    item2.setFocus();
    setScene(m_scene);
}

MainWindow::~MainWindow()
{

}
