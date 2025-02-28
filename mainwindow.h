#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QElapsedTimer>



QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
     friend class Test2;

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    Ui::MainWindow *getUi() const;

private slots:

    void on_userName_textChanged(const QString &arg1);

    void on_PassWord_textChanged(const QString &arg1);

    void on_Register_clicked();



    void on_Login_clicked();

private:
    Ui::MainWindow *ui;
    QSqlDatabase db;
    QElapsedTimer clickTimer;
};
#endif // MAINWINDOW_H
