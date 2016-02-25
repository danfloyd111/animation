#pragma once

#include <QMainWindow>
#include <QWidget>
#include <MyWidget.h>

class MyWindow : public QMainWindow {
    
    Q_OBJECT
    
    private:
    MyWidget *widget;
    
    public:
    MyWindow(QWidget *parent=0);
};