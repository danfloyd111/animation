#include <Ball.h>

Ball::Ball(QWidget *parent) : QWidget(parent){
    resize(50, 50);
}

void Ball::paintEvent(QPaintEvent*) {
    // draw the ball
    QPainter p(this);
    p.setRenderHints(QPainter::Antialiasing | QPainter::SmoothPixmapTransform);
    p.setBrush(Qt::red);
    QPen linePen;
	  linePen.setWidth(2);
	  linePen.setBrush(Qt::black);
	  linePen.setCapStyle(Qt::RoundCap);
	  linePen.setJoinStyle(Qt::RoundJoin);
	  p.setPen(linePen);
    // the offset is needed because the pen is 2px wide
    p.drawEllipse(rect().x()+1, rect().y()+1, rect().width()-2, rect().height()-2);
}
