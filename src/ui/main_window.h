#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "entry_view_model.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:

    EntryModel*     model;
    Ui::MainWindow* ui;
};
#endif // MAINWINDOW_H
