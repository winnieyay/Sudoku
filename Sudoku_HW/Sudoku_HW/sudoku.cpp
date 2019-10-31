#include"sudoku.h"
using namespace std;

Sudoku::Sudoku(){
    for(int i=0;i<sudokuSize;++i)
        map[i]=0;

}
Sudoku::Sudoku(const int init_map[]){
    for(int i=0;i<sudokuSize;++i)
        map[i]=init_map[i];
}

void Sudoku::setMap(const int set_map[]){
    for(int i=0;i<sudokuSize;++i)
        map[i]=set_map[i];
}
int Sudoku::getElement(int index){
    return map[index];
}

void Sudoku::setElement(int index, int value){
    map[index]=value;
}

int Sudoku::getFirstZeroIndex(){
    for(int j=0;j<81;++j){

        if(map[j]==0){
            return j;
        }
    }
    return -1;
}

bool Sudoku::rowCanUse(int index,int num,Sudoku questionCheck){
    int row =index/9;

    for(int i=0;i<9;i++){
        if(questionCheck.getElement(row*9+i)==num)
            return false;
    }
    return true;

}

bool Sudoku::columeCanUse(int index,int num,Sudoku questionCheck){

    int row =index/9;
    int firstCol =index-row*9;

    for(int i=0;i<9;i++){
        if(questionCheck.getElement(firstCol+i*9)==num)
            return false;
    }
    return true;

}

bool Sudoku::blockCanUse(int index,int num,Sudoku questionCheck){
    if(index==0||index==1||index==2||index==9||index==10||index==11||index==18||index==19||index==20)
        index=0;
    if(index==3||index==4||index==5||index==12||index==13||index==14||index==21||index==22||index==23)
        index=3;
    if(index==6||index==7||index==8||index==15||index==16||index==17||index==24||index==25||index==26)
        index=6;
    if(index==27||index==28||index==29||index==36||index==37||index==38||index==45||index==46||index==47)
        index=27;
    if(index==30||index==31||index==32||index==39||index==40||index==41||index==48||index==49||index==50)
        index=30;
    if(index==33||index==34||index==35||index==42||index==43||index==44||index==51||index==52||index==53)
        index=33;
    if(index==54||index==55||index==56||index==63||index==64||index==65||index==72||index==73||index==74)
        index=54;
    if(index==57||index==58||index==59||index==66||index==67||index==68||index==75||index==76||index==77)
        index=57;
    if(index==60||index==61||index==62||index==69||index==70||index==71||index==78||index==79||index==80)
        index=60;

    for(int i=index;i<index+21;i+=9){
        for(int j=0;j<3;j++){
            if(questionCheck.getElement(i+j)==num)
                return false;
        }
    }
    return true;
}


bool Sudoku::checkUnity(int arr[]){
    int arr_unity[9];

    for(int i=0;i<9;i++)
        arr_unity[i]=0;
    for(int i=0;i<9;i++)
        ++arr_unity[arr[i]-1];
    for(int i=0;i<9;i++)
        if(arr_unity[i]!=1)
            return false;
    return true;
}


bool Sudoku::isCorrect(){
    bool check_result;
    int check_arr[9];
    int location;


    for(int i=0;i<81;i+=9){                  //check rows
        for(int j=0;j<9;++j)
            check_arr[j]=map[i+j];
        check_result=checkUnity(check_arr);
        if(check_result==false)
            return false;
    }

    for(int i=0;i<9;++i){                   //check columns
        for(int j=0;j<9;++j)
            check_arr[j]=map[i+9*j];
        check_result=checkUnity(check_arr);
        if(check_result==false)
            return false;
    }


    for(int i=0;i<9;++i){                   //check cells
        for(int j=0;j<9;++j){
            location = 27*(i/3)+3*(i%3)+9*(j/3)+(j%3);
            check_arr[j]=map[location];
        }
        check_result=checkUnity(check_arr);
        if(check_result==false)
            return false;
    }



    return true;

}
void Sudoku:: print_map(){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cout<<map[i*9+j]<<" ";
        }
        cout<<endl;

    }
}

