/*
 *********************************************************************************************************
 *
 * Function：生命游戏。
 *
 * FileName：P6_10.cpp
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
#include<time.h>

using namespace std;

#define X 20
#define Y 30

void delay(int ms)
{
    clock_t start = clock();
    while (clock() - start < ms);
}

void Evolution()
{
    int next[X][Y] = {0};
    int Next[X][Y] = { 0 };
    int i, j;
    //初始化数组
    next[2][4] = 1;
    next[3][2] = 1;
    next[3][4] = 1;
    next[4][3] = 1;
    next[4][4] = 1;
    //next[3][4] = 1;
    for (i = 0; i < X; i++)
    {
        for (j = 0; j < Y; j++)
        {
            Next[i][j] = next[i][j];
            if (next[i][j] == 1)
                cout << " ●";
            else
            {
                cout << " ○";
            }
        }
        cout << endl;
    }
    delay(2000);
    system("cls");
    int counter;
    while (1)
    {
        for (i = 1; i < X-1; i++)
        {
            for (j = 1; j < Y-1; j++)
            {
                counter = 0;//统计周围的细胞数
                if (Next[i - 1][j] == 1)
                    counter += 1;
                if (Next[i - 1][j + 1] == 1)
                    counter += 1;
                if (Next[i - 1][j - 1] == 1)
                    counter += 1;
                if (Next[i + 1][j] == 1)
                    counter += 1;
                if (Next[i + 1][j - 1] == 1)
                    counter += 1;
                if (Next[i + 1][j + 1] == 1)
                    counter += 1;
                if (Next[i][j + 1] == 1)
                    counter += 1;
                if (Next[i][j - 1] == 1)
                    counter += 1;


                if (next[i][j] == 1)
                {
                    if (counter < 2)//寂寞死
                    {
                        next[i][j] = 0;
                    }
                    else if (counter < 4)//存活
                    { }
                    else//挤死
                    {
                        next[i][j] = 0;
                    }
                }
                else if (next[i][j] == 0)
                {
                    if (counter > 2)//新生
                    {
                        next[i][j] = 1;
                    }
                }

            }
        }
        for (i = 0; i < X; i++)//更新
        {
            for (j = 0; j < Y; j++)
            {
                Next[i][j] = next[i][j];
            }
        }
        /*********打印*********/
        for (i = 0; i < X; i++)
        {
            for (j = 0; j < Y; j++)
            {
                if (next[i][j] == 1)
                    cout << " ●";
                else
                {
                    cout << " ○";
                }
            }
            cout << endl;
        }
        delay(100);
        system("cls");
    }
}
int main()
{
    Evolution();
    return 0;
}
