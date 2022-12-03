#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include "materiel.h"
#include <QStandardItemModel>
#include <QSortFilterProxyModel>
#include <arduino.h>

QT_BEGIN_NAMESPACE
namespace Ui {class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();



    QSortFilterProxyModel *proxy;
private slots:

    void on_on_pushButton_ajouter_clicked_clicked();

    void on_modifier_clicked();

    void on_pushButton_clicked();//pdf

    void on_pushButton_2_clicked();//recherche

    void on_pushButton_3_clicked();//supp

    void on_pb_trier_clicked();


    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:

    Ui::MainWindow *ui;
      materiel mp;

 QByteArray data;

     Arduino A;

};
#endif // MAINWINDOW_H
