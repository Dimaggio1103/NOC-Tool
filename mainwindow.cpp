#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDesktopServices>
#include <QHostAddress>
#include <QNetworkInterface>
#include <QSettings>
#include <QUrl>
#include <QFile>
#include <QtWin>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color: lightgray;"); //background:transparent;
    this->setAttribute(Qt::WA_TranslucentBackground);
    //this->setAttribute(QtWin::enableBlurBehindWindow());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_radioButton_clicked()
{

    QFile file(":/new/prefix1/cidr.txt");
    file.open(QIODevice::Text | QIODevice::ReadOnly);
    QString content;
    while(!file.atEnd())
        content.append(file.readLine());
    ui->textBrowser->setPlainText(content);
    file.close();

}

void MainWindow::on_radioButton_2_clicked()
{
    QFile file(":/new/prefix1/mac.txt");
    file.open(QIODevice::Text | QIODevice::ReadOnly);
    QString content;
    while(!file.atEnd())
        content.append(file.readLine());
    ui->textBrowser->setPlainText(content);
    file.close();
}

void MainWindow::on_radioButton_3_clicked()
{
    QFile file(":/new/prefix1/phones.txt");
    file.open(QIODevice::Text | QIODevice::ReadOnly);
    QString content;
    while(!file.atEnd())
        content.append(file.readLine());
    ui->textBrowser->setPlainText(content);
    file.close();
}

void MainWindow::on_pushButton_clicked()
{
    ui->textBrowser->clear();
    QList<QHostAddress> list = QNetworkInterface::allAddresses();
     for(int nIter=0; nIter<list.count(); nIter++)
      {
          if(!list[nIter].isLoopback())
              if (list[nIter].protocol() == QAbstractSocket::IPv4Protocol )
                  //while loop
                ui->textBrowser->append("Your Network info is: ");
                ui->textBrowser->append(list[nIter].toString()); //TODO: Get order in wich address are displayed..Loop?
                //qDebug() << list[nIter].toString();
      }


}

void MainWindow::on_radioButton_4_clicked()
{
    QFile file(":/new/prefix1/cli.txt");
    file.open(QIODevice::Text | QIODevice::ReadOnly);
    QString content;
    while(!file.atEnd())
        content.append(file.readLine());
    ui->textBrowser->setPlainText(content);
    file.close();
}
void MainWindow::on_radioButton_5_clicked()
{
    QFile file(":/new/prefix1/egs.txt");
    file.open(QIODevice::Text | QIODevice::ReadOnly);
    QString content;
    while(!file.atEnd())
        content.append(file.readLine());
    ui->textBrowser->setPlainText(content);
    file.close();
}


void MainWindow::on_radioButton_6_clicked()
{
    QFile file(":/new/prefix1/egspms.txt");
    file.open(QIODevice::Text | QIODevice::ReadOnly);
    QString content;
    while(!file.atEnd())
        content.append(file.readLine());
    ui->textBrowser->setPlainText(content);
    file.close();
}

void MainWindow::on_radioButton_7_clicked()
{
    QFile file(":/new/prefix1/Ciscocli.txt");
    file.open(QIODevice::Text | QIODevice::ReadOnly);
    QString content;
    while(!file.atEnd())
        content.append(file.readLine());
    ui->textBrowser->setPlainText(content);
    file.close();
}
void MainWindow::on_radioButton_8_clicked()
{
    QFile file(":/new/prefix1/linuxgen.txt");
    file.open(QIODevice::Text | QIODevice::ReadOnly);
    QString content;
    while(!file.atEnd())
        content.append(file.readLine());
    ui->textBrowser->setPlainText(content);
    file.close();

}

void MainWindow::on_pushButton_2_clicked()
{
    QFile file(":/new/prefix1/allbridgeEmails.txt");
    file.open(QIODevice::Text | QIODevice::ReadOnly);
    QString content;
    while(!file.atEnd())
        content.append(file.readLine());
    ui->textBrowser->setPlainText(content);
    file.close();


}

void MainWindow::on_radioButton_9_clicked()
{
    QFile file(":/new/prefix1/brocade.txt");
    file.open(QIODevice::Text | QIODevice::ReadOnly);
    QString content;
    while(!file.atEnd())
        content.append(file.readLine());
    ui->textBrowser->setPlainText(content);
    file.close();
}

void MainWindow::on_radioButton_10_clicked()
{
    QFile file(":/new/prefix1/ext.txt");
    file.open(QIODevice::Text | QIODevice::ReadOnly);
    QString content;
    while(!file.atEnd())
        content.append(file.readLine());
    ui->textBrowser->setPlainText(content);
    file.close();

}



void MainWindow::on_comboBox_activated(const QString &arg1)
{
    QString combo = ui->comboBox->currentText();
            if (combo == "Rukus")
            {

                QFile file(":/new/prefix1/rukus.txt");
                file.open(QIODevice::Text | QIODevice::ReadOnly);
                QString content;
                while(!file.atEnd())
                    content.append(file.readLine());
                ui->textBrowser->setPlainText(content);
                file.close();
            }
            else if (combo == "HP")
            {

                QFile file(":/new/prefix1/hpe.txt");
                file.open(QIODevice::Text | QIODevice::ReadOnly);
                QString content;
                while(!file.atEnd())
                    content.append(file.readLine());
                ui->textBrowser->setPlainText(content);
                file.close();
            }
            else if (combo == "Cisco")
            {

                QFile file(":/new/prefix1/cisco.txt");
                file.open(QIODevice::Text | QIODevice::ReadOnly);
                QString content;
                while(!file.atEnd())
                    content.append(file.readLine());
                ui->textBrowser->setPlainText(content);
                file.close();
            }
            else if (combo == "Acumatica")
            {
                QDesktopServices::openUrl(QUrl("https://dci-design.acumatica.com/Frames/Login.aspx?ReturnUrl=%2f"));
            }
            else if (combo == "Nomadix")
            {

                QFile file(":/new/prefix1/nomadix.txt");
                file.open(QIODevice::Text | QIODevice::ReadOnly);
                QString content;
                while(!file.atEnd())
                    content.append(file.readLine());
                ui->textBrowser->setPlainText(content);
                file.close();
            }

}

