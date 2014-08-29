#include "dialog.h"
#include "ui_dialog.h"
#include <QFileDialog>
#include <QDir>



Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog) {

    ui->setupUi(this);
}

Dialog::~Dialog() {
    delete ui;
}

void Dialog::on_pushButton_clicked() {

     QDir directory;
     QString path = QFileDialog::getExistingDirectory (this, tr("Directory"), directory.path());

}
