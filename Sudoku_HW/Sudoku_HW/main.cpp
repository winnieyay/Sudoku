#include "mainwindow.h"
#include <QApplication>
#include "sudoku.h"
#include <vector>
#include<cstdlib>
#include<fstream>
#include <QFile>
#include<QDebug>
#include<vector>

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);


    MainWindow w;
    w.show();




    return a.exec();
}






