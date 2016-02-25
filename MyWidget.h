#pragma once

#include <QTimer>
#include <QWidget>
#include <QPushButton>
#include <Ball.h>

class MyWidget : public QWidget {

    Q_OBJECT

    private:
    QTimer *timer; // this timer manages the animation
    QPushButton *startButton; // this button starts the animation
    Ball *ball;
    int startX, startY, finalX, finalY, currY, inteX, timeElapsed;
    int startPosX, startPosY;
    bool clicked;

    public:
    MyWidget(QWidget *parent = 0);
    float quarticEaseOut(float t, float b, float c, float d); // quadratic easing function

    private slots:
    void timerTick(); // called when the timer raises timeout signal
    void buttonClick(); // called when the button raises click signal

    protected:
    void resizeEvent(QResizeEvent *); // called when resize event is throwed
};
