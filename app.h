#ifndef APP_H
#define APP_H

#include <QMainWindow>


namespace Ui {
    class App;
}

class App : public QMainWindow
{
    Q_OBJECT

public:
    explicit App(QWidget *parent = 0);
    ~App();

private slots:
    void on_actionOpen_triggered();

private:
    Ui::App *ui;
};

#endif // APP_H
