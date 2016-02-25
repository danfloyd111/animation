#include <MyWindow.h>

MyWindow::MyWindow(QWidget *parent) : QMainWindow(parent) {
    widget = new MyWidget();
    setCentralWidget(widget); // MyWidget cover all the MyWindow's area
    setWindowTitle("Animazione");
    setMinimumSize(160,160);
    resize(780, 520);
}
