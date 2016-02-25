#pragma once

#include <QWidget>
#include <QPainter>

class Ball : public QWidget {
    
    Q_OBJECT

    protected:
    void paintEvent(QPaintEvent*);

    public:
    Ball(QWidget *parent);

};