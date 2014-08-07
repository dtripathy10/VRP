#include "app.h"
#include "ui_app.h"

#include <QtCore>
#include <QtGui>
#include <QMessageBox>

App::App(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::App)
{
    ui->setupUi(this);
}

App::~App() {
    delete ui;
}

void App::on_actionOpen_triggered() {

    QMessageBox::information(this,"title","Hello");
}
