#include "app.h"
#include "ui_app.h"

#include <QtCore>
#include <QtGui>
#include <QMessageBox>
#include <dialog.h>

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

void App::on_actionAlgo_1_triggered()
{
    Dialog* dialog = new Dialog();
    dialog->show();

}
