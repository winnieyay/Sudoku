#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDebug>
#include <QFile>
#include<QString>
#include <QApplication>
#include "sudoku.h"
#include <vector>
#include<cstdlib>
#include<fstream>
#include<vector>
#include<iostream>

#define MAX_SIZE 9
#define MAX_CASE 10
int matrix[MAX_SIZE][MAX_SIZE];

using namespace std;

bool ansCorect;
QLineEdit *box[81];


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);




    box[0]=ui->lineEdit;       //lineEdit.setFont(QFont( "Timers" , 28 ,  QFont::Bold) );
    box[1]=ui->lineEdit_2;
    box[2]=ui->lineEdit_3;
    box[3]=ui->lineEdit_4;
    box[4]=ui->lineEdit_5;
    box[5]=ui->lineEdit_6;
    box[6]=ui->lineEdit_7;
    box[7]=ui->lineEdit_8;
    box[8]=ui->lineEdit_9;
    box[9]=ui->lineEdit_10;
    box[10]=ui->lineEdit_11;
    box[11]=ui->lineEdit_12;
    box[12]=ui->lineEdit_13;
    box[13]=ui->lineEdit_14;
    box[14]=ui->lineEdit_15;
    box[15]=ui->lineEdit_16;
    box[16]=ui->lineEdit_17;
    box[17]=ui->lineEdit_18;
    box[18]=ui->lineEdit_19;
    box[19]=ui->lineEdit_20;
    box[20]=ui->lineEdit_21;
    box[21]=ui->lineEdit_22;
    box[22]=ui->lineEdit_23;
    box[23]=ui->lineEdit_24;
    box[24]=ui->lineEdit_25;
    box[25]=ui->lineEdit_26;
    box[26]=ui->lineEdit_27;
    box[27]=ui->lineEdit_28;
    box[28]=ui->lineEdit_29;
    box[29]=ui->lineEdit_30;
    box[30]=ui->lineEdit_31;
    box[31]=ui->lineEdit_32;
    box[32]=ui->lineEdit_33;
    box[33]=ui->lineEdit_34;
    box[34]=ui->lineEdit_35;
    box[35]=ui->lineEdit_36;
    box[36]=ui->lineEdit_37;
    box[37]=ui->lineEdit_38;
    box[38]=ui->lineEdit_39;
    box[39]=ui->lineEdit_40;
    box[40]=ui->lineEdit_41;
    box[41]=ui->lineEdit_42;
    box[42]=ui->lineEdit_43;
    box[43]=ui->lineEdit_44;
    box[44]=ui->lineEdit_45;
    box[45]=ui->lineEdit_46;
    box[46]=ui->lineEdit_47;
    box[47]=ui->lineEdit_48;
    box[48]=ui->lineEdit_49;
    box[49]=ui->lineEdit_50;
    box[50]=ui->lineEdit_51;
    box[51]=ui->lineEdit_52;
    box[52]=ui->lineEdit_53;
    box[53]=ui->lineEdit_54;
    box[54]=ui->lineEdit_55;
    box[55]=ui->lineEdit_56;
    box[56]=ui->lineEdit_57;
    box[57]=ui->lineEdit_58;
    box[58]=ui->lineEdit_59;
    box[59]=ui->lineEdit_60;
    box[60]=ui->lineEdit_61;
    box[61]=ui->lineEdit_62;
    box[62]=ui->lineEdit_63;
    box[63]=ui->lineEdit_64;
    box[64]=ui->lineEdit_65;
    box[65]=ui->lineEdit_66;
    box[66]=ui->lineEdit_67;
    box[67]=ui->lineEdit_68;
    box[68]=ui->lineEdit_69;
    box[69]=ui->lineEdit_70;
    box[70]=ui->lineEdit_71;
    box[71]=ui->lineEdit_72;
    box[72]=ui->lineEdit_73;
    box[73]=ui->lineEdit_74;
    box[74]=ui->lineEdit_75;
    box[75]=ui->lineEdit_76;
    box[76]=ui->lineEdit_77;
    box[77]=ui->lineEdit_78;
    box[78]=ui->lineEdit_79;
    box[79]=ui->lineEdit_80;
    box[80]=ui->lineEdit_81;


    for(int i=0;i<81;i++){
        int ten=i/9;
        int one=i%9;
        matrix[ten][one]=box[i]->text().toInt();
        //qDebug()<<matrix[ten][one];

    }

    ui->lineEdit_4->setStyleSheet("QLineEdit { background: rgb(197, 228, 248); selection-background-color: rgb(0, 255, 255); }");
    ui->lineEdit_5->setStyleSheet("QLineEdit { background: rgb(197, 228, 248); selection-background-color: rgb(0, 255, 255); }");
    ui->lineEdit_6->setStyleSheet("QLineEdit { background: rgb(197, 228, 248); selection-background-color: rgb(0, 255, 255); }");
    ui->lineEdit_13->setStyleSheet("QLineEdit { background: rgb(197, 228, 248); selection-background-color: rgb(0, 255, 255); }");
    ui->lineEdit_14->setStyleSheet("QLineEdit { background: rgb(197, 228, 248); selection-background-color: rgb(0, 255, 255); }");
    ui->lineEdit_15->setStyleSheet("QLineEdit { background: rgb(197, 228, 248); selection-background-color: rgb(0, 255, 255); }");
    ui->lineEdit_22->setStyleSheet("QLineEdit { background: rgb(197, 228, 248); selection-background-color: rgb(0, 255, 255); }");
    ui->lineEdit_23->setStyleSheet("QLineEdit { background: rgb(197, 228, 248); selection-background-color: rgb(0, 255, 255); }");
    ui->lineEdit_24->setStyleSheet("QLineEdit { background: rgb(197, 228, 248); selection-background-color: rgb(0, 255, 255); }");
    ui->lineEdit_28->setStyleSheet("QLineEdit { background: rgb(197, 228, 248); selection-background-color: rgb(0, 255, 255); }");
    ui->lineEdit_29->setStyleSheet("QLineEdit { background: rgb(197, 228, 248); selection-background-color: rgb(0, 255, 255); }");
    ui->lineEdit_30->setStyleSheet("QLineEdit { background: rgb(197, 228, 248); selection-background-color: rgb(0, 255, 255); }");
    ui->lineEdit_37->setStyleSheet("QLineEdit { background: rgb(197, 228, 248); selection-background-color: rgb(0, 255, 255); }");
    ui->lineEdit_38->setStyleSheet("QLineEdit { background: rgb(197, 228, 248); selection-background-color: rgb(0, 255, 255); }");
    ui->lineEdit_39->setStyleSheet("QLineEdit { background: rgb(197, 228, 248); selection-background-color: rgb(0, 255, 255); }");
    ui->lineEdit_46->setStyleSheet("QLineEdit { background: rgb(197, 228, 248); selection-background-color: rgb(0, 255, 255); }");
    ui->lineEdit_47->setStyleSheet("QLineEdit { background: rgb(197, 228, 248); selection-background-color: rgb(0, 255, 255); }");
    ui->lineEdit_48->setStyleSheet("QLineEdit { background: rgb(197, 228, 248); selection-background-color: rgb(0, 255, 255); }");
    ui->lineEdit_34->setStyleSheet("QLineEdit { background: rgb(197, 228, 248); selection-background-color: rgb(0, 255, 255); }");
    ui->lineEdit_35->setStyleSheet("QLineEdit { background: rgb(197, 228, 248); selection-background-color: rgb(0, 255, 255); }");
    ui->lineEdit_36->setStyleSheet("QLineEdit { background: rgb(197, 228, 248); selection-background-color: rgb(0, 255, 255); }");
    ui->lineEdit_43->setStyleSheet("QLineEdit { background: rgb(197, 228, 248); selection-background-color: rgb(0, 255, 255); }");
    ui->lineEdit_44->setStyleSheet("QLineEdit { background: rgb(197, 228, 248); selection-background-color: rgb(0, 255, 255); }");
    ui->lineEdit_45->setStyleSheet("QLineEdit { background: rgb(197, 228, 248); selection-background-color: rgb(0, 255, 255); }");
    ui->lineEdit_52->setStyleSheet("QLineEdit { background: rgb(197, 228, 248); selection-background-color: rgb(0, 255, 255); }");
    ui->lineEdit_53->setStyleSheet("QLineEdit { background: rgb(197, 228, 248); selection-background-color: rgb(0, 255, 255); }");
    ui->lineEdit_54->setStyleSheet("QLineEdit { background: rgb(197, 228, 248); selection-background-color: rgb(0, 255, 255); }");
    ui->lineEdit_58->setStyleSheet("QLineEdit { background: rgb(197, 228, 248); selection-background-color: rgb(0, 255, 255); }");
    ui->lineEdit_59->setStyleSheet("QLineEdit { background: rgb(197, 228, 248); selection-background-color: rgb(0, 255, 255); }");
    ui->lineEdit_60->setStyleSheet("QLineEdit { background: rgb(197, 228, 248); selection-background-color: rgb(0, 255, 255); }");
    ui->lineEdit_67->setStyleSheet("QLineEdit { background: rgb(197, 228, 248); selection-background-color: rgb(0, 255, 255); }");
    ui->lineEdit_68->setStyleSheet("QLineEdit { background: rgb(197, 228, 248); selection-background-color: rgb(0, 255, 255); }");
    ui->lineEdit_69->setStyleSheet("QLineEdit { background: rgb(197, 228, 248); selection-background-color: rgb(0, 255, 255); }");
    ui->lineEdit_76->setStyleSheet("QLineEdit { background: rgb(197, 228, 248); selection-background-color: rgb(0, 255, 255); }");
    ui->lineEdit_77->setStyleSheet("QLineEdit { background: rgb(197, 228, 248); selection-background-color: rgb(0, 255, 255); }");
    ui->lineEdit_78->setStyleSheet("QLineEdit { background: rgb(197, 228, 248); selection-background-color: rgb(0, 255, 255); }");

/*
    QPalette palette;
    palette.setColor(QPalette::Text,Qt::red);
    ui->lineEdit->setPalette(palette);
*/



    connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(check_slot()));
    connect(ui->pushButton_3,SIGNAL(clicked(bool)),this,SLOT(newGame()));
    connect(ui->pushButton_4,SIGNAL(clicked(bool)),this,SLOT(giveMeAnswer()));


}

MainWindow::~MainWindow()
{
    delete ui;
}





void MainWindow:: print_matrix(){
    cout << "=====current====" << endl;
    for (int i = 0; i < MAX_SIZE; i++){
        cout << "|";
        for (int j = 0; j < MAX_SIZE; j++){
            cout << matrix[i][j];
            if (j % 3 == 2)
                cout << "|";
        }
        cout << endl;
        if (i % 3 == 2)
            cout << "-------------" << endl;
    }
}

bool MainWindow::solve(Sudoku question,Sudoku & answer){
    int firstZero;

    firstZero=question.getFirstZeroIndex();

    //cout<<"firstZero :"<<firstZero<<endl;
    if(firstZero==-1){
        //cout<<"c c "<<endl;
        if(question.isCorrect()){
            //cout << "correct" << endl;
            answer=question;
            return true;

        }else
            return false;

    }else{
        //cout<<"firstZero :"<<firstZero<<endl;

        //cout<<"row :"<<row<<"   "<<"col :"<<col<<endl;
        for(int num=1;num<=9;++num){
            if(question.rowCanUse(firstZero,num,question)){
                //cout<<"row no use"<<endl;
                if(question.columeCanUse(firstZero,num,question)){
                    //cout<<"col no use"<<endl;
                    if(question.blockCanUse(firstZero,num,question)){
                        //cout<<"block no use"<<endl;
                        question.setElement(firstZero,num);
                                    //cout << "solving at"<< firstZero << " using "<< num << endl;
                                    if(solve(question,answer))
                                        return true;
                    }
                }
            }
        }
        return false;
    }
}





void MainWindow::check_slot(){
    int checkarr[81];

    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            matrix[i][j]=box[i*9+j]->text().toInt();
        }
    }

    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            checkarr[i*9+j]=matrix[i][j];
        }
    }
    Sudoku su_tmp;
    vector<Sudoku> su;
    su_tmp.setMap(checkarr);
    su.push_back(su_tmp);
    if(su[0].isCorrect()==0){
        cout<<"答錯囉"<<endl;
        ansCorect=false;
    }else{
        cout<<"恭喜答對了！"<<endl;
        ansCorect=true;
    }
    if(ansCorect){
        ui->textBrowser->setText("答對了");
    }else{
        ui->textBrowser->setText("答錯囉");
    }
}




void MainWindow::newGame(){

    int sudoku_in[Sudoku::sudokuSize];

    Sudoku su_tmp;
    vector<Sudoku> su;
    QFile inputFile(":/resource/questionFile.txt");
    if (inputFile.open(QIODevice::ReadOnly))
    {
       QTextStream in(&inputFile);
       for(int j=0;j<6;j++){
           for(int i=0;i<81;i++){
               in>>sudoku_in[i];
           }
           su_tmp.setMap(sudoku_in);
           //su_tmp.print_map();
           su.push_back(su_tmp);
       }
       inputFile.close();
    }

     //cout<<su.size()<<endl;
    qsrand(time(NULL));
    int table =qrand()% ((5 + 1) - 0) + 0;
    for(int i=0;i<81;i++){
        QString element_tmp=QString::number(su[table].getElement(i));
        box[i]->setText(element_tmp);
    }

}

void MainWindow::giveMeAnswer(){

    Sudoku ques;
    Sudoku ans;
    for(int i=0;i<81;i++){
        ques.setElement(i,box[i]->text().toInt());
    }
    if(solve(ques,ans)==true){
        //cout<<"Solvable!\n";
        //ans.print_map();

        for(int i=0;i<81;i++){
            QString element_tmp=QString::number(ans.getElement(i));
            box[i]->setText(element_tmp);
        }
        ui->textBrowser->setText("嫩");

    }else{
        ui->textBrowser->setText("無解啦");
    }
}






