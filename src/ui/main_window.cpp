#include "main_window.h"
#include "./ui_main_window.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
      ui(new Ui::MainWindow)
{
    this->model = new EntryModel(this);
    ui->setupUi(this);
    ui->entries_table->setModel(this->model);
}

MainWindow::~MainWindow()
{

}


