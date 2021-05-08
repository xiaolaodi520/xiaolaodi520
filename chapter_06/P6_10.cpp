/*
 *********************************************************************************************************
 *
 * Function��������Ϸ��
 *
 * FileName��P6_10.cpp
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
    //��ʼ������
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
                cout << " ��";
            else
            {
                cout << " ��";
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
                counter = 0;//ͳ����Χ��ϸ����
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
                    if (counter < 2)//��į��
                    {
                        next[i][j] = 0;
                    }
                    else if (counter < 4)//���
                    { }
                    else//����
                    {
                        next[i][j] = 0;
                    }
                }
                else if (next[i][j] == 0)
                {
                    if (counter > 2)//����
                    {
                        next[i][j] = 1;
                    }
                }

            }
        }
        for (i = 0; i < X; i++)//����
        {
            for (j = 0; j < Y; j++)
            {
                Next[i][j] = next[i][j];
            }
        }
        /*********��ӡ*********/
        for (i = 0; i < X; i++)
        {
            for (j = 0; j < Y; j++)
            {
                if (next[i][j] == 1)
                    cout << " ��";
                else
                {
                    cout << " ��";
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
