#include <MyWidget.h>

MyWidget::MyWidget(QWidget *parent) : QWidget(parent) {
    // ball's parameters init and ball creation
    startPosX = 30;
    startPosY = 130;
    ball = new Ball(this);
    ball->move(startPosX, startPosY);
    ball->show();
    // button's parameters init and button creation
    clicked = false;
    startButton = new QPushButton("&Start", this);
    int posX = this->width() / 2 - startButton->width() / 2;
    int posY = this->height() - 50;
    startButton->move(posX, posY);
    startButton->show();
    connect(startButton, SIGNAL(clicked()), this, SLOT(buttonClick()));
    // timer init
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(timerTick()));
}

void MyWidget::resizeEvent(QResizeEvent*) {
    // button repositioning
    int posX = this->width() / 2 - startButton->width() / 2;
    int posY = this->height() - 50;
    startButton->move(posX, posY);
}

void MyWidget::timerTick() {
    int duration = 2500; // animation duration: 2,5 sec
    timeElapsed += 20; // timer ticks every 20 msec
    int currY = ball->y();
    inteX = quarticEaseOut(timeElapsed, startX, finalX, duration); // ball position interpolation
    ball->move(inteX, currY);
    if(timeElapsed >= duration)
        timer->stop(); // stop the timer if elapsed time is >= 2,5
}

void MyWidget::buttonClick() {
    if (clicked) {
      // repositioning the ball
      ball->move(startPosX, startPosY);
      clicked = false;
    }
    timeElapsed = 0;
    timer->start(20); // start the timer (and the animation)
    // set start position of the ball
    startX = ball->x();
    startY = ball->y();
    // set final position of the ball
    finalX = this->width() - 30*2 - ball->width();
    finalY = startY;
    clicked = true;
}

float MyWidget::quarticEaseOut(float t, float b, float c, float d){
    // t: elapsed time
    // b: initial position
    // c: final position
    // d: animation duration
    t /= d;
	return c*t*t*t*t + b;
}
