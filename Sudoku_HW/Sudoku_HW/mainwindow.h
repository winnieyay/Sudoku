#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<vector>
#include "sudoku.h"
using namespace  std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void print_matrix();
    bool solve(Sudoku question,Sudoku& answer);

private slots:

   void check_slot();
   void newGame();
   void giveMeAnswer();




private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
