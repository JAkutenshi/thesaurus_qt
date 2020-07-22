#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent)
{
   _vbox_layout = new QVBoxLayout(this);
   _hello_label = new QLabel("Text will there...", this);
   _print_hello_button = new QPushButton("Print!", this);


   _vbox_layout->addWidget(_hello_label);
   _vbox_layout->addWidget(_print_hello_button);

   connect(_print_hello_button,
           &QPushButton::clicked,
           this,
           [=](){ this->_hello_label->setText("Hello World!"); });
}

MainWindow::~MainWindow()
{
    delete _print_hello_button;
    delete _hello_label;
    delete _vbox_layout;
}


