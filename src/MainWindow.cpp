#include "MainWindow.h"
#include "OutLineItem.h"
#include <QGraphicsView>

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent)
{
	auto *view = new QGraphicsView(this);
	auto *item = new OutLineItem();

	item->setLine(50, 50, 250, 150);
	item->setPen(QPen(Qt::green, 10));
	item->setOutlineColor(Qt::blue);
	item->setOutlineWidth(2);

	view->setScene(new QGraphicsScene(this));
	view->scene()->addItem(item);

	setCentralWidget(view);
	resize(300, 200);
}
