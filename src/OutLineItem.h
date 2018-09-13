#ifndef OUTLINEITEM_H
#define OUTLINEITEM_H

#include <QGraphicsLineItem>

class OutLineItem : public QGraphicsLineItem
{
public:
	explicit OutLineItem(QGraphicsItem *parent = nullptr);

	qreal outlineWidth() const;
	void setOutlineWidth(qreal outlineWidth);

	QColor outlineColor() const;
	void setOutlineColor(const QColor &outlineColor);

	void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;

private:
	qreal m_outlineWidth;
	QColor m_outlineColor;
};

#endif // OUTLINEITEM_H
