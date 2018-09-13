#include "OutLineItem.h"
#include <QPainter>

OutLineItem::OutLineItem(QGraphicsItem *parent) :
	QGraphicsLineItem(parent),
	m_outlineWidth(1),
	m_outlineColor(Qt::red)
{

}

qreal OutLineItem::outlineWidth() const
{
	return m_outlineWidth;
}

void OutLineItem::setOutlineWidth(qreal outlineWidth)
{
	m_outlineWidth = outlineWidth;
}

QColor OutLineItem::outlineColor() const
{
	return m_outlineColor;
}

void OutLineItem::setOutlineColor(const QColor &outlineColor)
{
	m_outlineColor = outlineColor;
}

void OutLineItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
	QPainterPath outline;

	outline.moveTo(line().p1());
	outline.lineTo(line().p2());

	painter->save();

	painter->strokePath(outline, QPen(m_outlineColor, 2*m_outlineWidth + pen().width()));

	painter->setPen(pen());
	painter->drawLine(line());

	painter->restore();
}
