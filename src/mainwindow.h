#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
   QVBoxLayout* _vbox_layout;
   QLabel*      _hello_label;
   QPushButton* _print_hello_button;
};
#endif // MAINWINDOW_H
