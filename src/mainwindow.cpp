#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent)
{
   _vbox_layout = new QVBoxLayout(this);
   _text_field  = new QLineEdit("Type text here...", this);
   _show_text_label = new QLabel("Text will there...", this);
   _print_text_button = new QPushButton("Print!", this);


   _vbox_layout->addWidget(_text_field);
   _vbox_layout->addWidget(_show_text_label);
   _vbox_layout->addWidget(_print_text_button);

   connect(_print_text_button,
           &QPushButton::clicked,
           this,
           [=](){

                this->_show_text_label->setText(_text_field->text());
           });
}

MainWindow::~MainWindow()
{
    delete _print_text_button;
    delete _show_text_label;
    delete _text_field;
    delete _vbox_layout;
}


