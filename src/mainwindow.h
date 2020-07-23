#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
   QVBoxLayout* _vbox_layout;
   QLabel*      _show_text_label;
   QLineEdit*   _text_field;
   QPushButton* _print_text_button;
};
#endif // MAINWINDOW_H
