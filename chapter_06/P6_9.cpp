/*
 *********************************************************************************************************
 *
 * Function：三连棋。
 *
 * FileName：P6_9.cpp
 *
 * 作者：   Aohan Zhang
 *
 * 单位：   河南大学计算机与信息工程学院
 *
 * E-mail:  2208143652@qq.com
 *
 * 时间：   2021年5月1日
 *
 * Version：   1.0
 *
 *********************************************************************************************************
 */

#include<iostream>
#include<string>

using namespace std;

const int MAX=15;

class TicTacToe
{
public:
    TicTacToe();

    void getTicTacToe();

    void printFigure();

private:

    string Game[MAX+10][MAX+10];
};

TicTacToe::TicTacToe()
{
    Game[0][0]="╔";

    Game[0][MAX]="╗";

    Game[MAX][0]="╚";

    Game[MAX][MAX]="╝";

    for(int i=1; i<MAX; i++)
    {
        Game[i][0]="╠";

        Game[0][i]="╦";

        Game[i][MAX]="╣";

        Game[MAX][i]="╩";

        for(int j=1; j<MAX; j++)
            Game[i][j]="╬";
    }
}
inline void TicTacToe::printFigure()
{
    for(int i=0; i<=MAX; i++)
    {
        for(int j=0; j<MAX; j++)

            cout<<Game[i][j]<<"═";

        cout<<Game[i][MAX]<<endl;

        if(i<MAX)
        {
            for(int j=0; j<MAX; j++)

                cout<<"║  ";

            cout<<"║"<<endl;
        }
    }
}
int main()
{
    TicTacToe T;

    system("cmd /c chcp 437");

    system("color 1e");

    T.printFigure();

    return 0;
}
