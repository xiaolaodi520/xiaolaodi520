/*
 *********************************************************************************************************
 *
 * Function�������塣
 *
 * FileName��P6_9.cpp
 *
 * ���ߣ�   Aohan Zhang
 *
 * ��λ��   ���ϴ�ѧ���������Ϣ����ѧԺ
 *
 * E-mail:  2208143652@qq.com
 *
 * ʱ�䣺   2021��5��1��
 *
 * Version��   1.0
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
    Game[0][0]="�X";

    Game[0][MAX]="�[";

    Game[MAX][0]="�^";

    Game[MAX][MAX]="�a";

    for(int i=1; i<MAX; i++)
    {
        Game[i][0]="�d";

        Game[0][i]="�j";

        Game[i][MAX]="�g";

        Game[MAX][i]="�m";

        for(int j=1; j<MAX; j++)
            Game[i][j]="�p";
    }
}
inline void TicTacToe::printFigure()
{
    for(int i=0; i<=MAX; i++)
    {
        for(int j=0; j<MAX; j++)

            cout<<Game[i][j]<<"�T";

        cout<<Game[i][MAX]<<endl;

        if(i<MAX)
        {
            for(int j=0; j<MAX; j++)

                cout<<"�U  ";

            cout<<"�U"<<endl;
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
