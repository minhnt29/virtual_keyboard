#include "mainwindow.h"
#include <QtVirtualKeyboard>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) {
    main_widget_ = new QWidget(this);
    main_layout_ = new QGridLayout(main_widget_);
    line_edit_ = new CustomLineEdit(main_widget_);

    this->setWindowTitle("Example");
    this->setMinimumHeight(600);
    this->setMinimumWidth(800);
    this->setCentralWidget(main_widget_);
    main_layout_->addWidget(line_edit_);

    line_edit_->setPlaceholderText("Please input text here...");
}
