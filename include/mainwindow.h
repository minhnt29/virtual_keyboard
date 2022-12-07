#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "custom_line_edit.h"
#include <QGridLayout>
#include <QMainWindow>

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);

private:
    QWidget *main_widget_;
    QGridLayout *main_layout_;
    CustomLineEdit *line_edit_;
};
#endif// MAINWINDOW_H
