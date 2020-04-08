#include "mainwindow.h"
#include <QDebug>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    qDebug() << QString::fromLocal8Bit("第一个上传git的程序");
    w.show();
    return a.exec();
}
