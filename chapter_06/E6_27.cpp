/*
 ********************************************************
 *                                                      *
 *  ���ܣ�   ���������ڽ�����ά����ĳ����               *
 *                                                      *
 *  �ļ����� E6_27 .cpp                                 *
 *                                                      *
 *  ���ߣ�   Aohan ZHANG                                *
 *                                                      *
 *  ��λ��   ���ϴ�ѧ���������Ϣ����ѧԺ               *
 *                                                      *
 *  E-mail:  2208143652@qq.com                          *
 *                                                      *
 *  ʱ�䣺   2021��5��4��                               *
 *                                                      *
 *  �汾��   1.0                                        *
 *                                                      *
 ********************************************************
 */
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int number[4][4]={
    { 1, 2, 3, 4},
    { 5, 6, 7, 8},
    { 9,10,11,12},
    {13,14,15,16},
    };


    cout<< "ԭ����Ϊ��"<<endl;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<setw(3)<<number[i][j];
        }
        cout<<endl;
    }
    int number_row[4];
    for(int i=0;i<4;i++)
    {
        number_row[i]=number[0][i];
        number[0][i]=number[1][i];
        number[1][i]=number_row[i];
    }

    cout<< "����һ�к͵ڶ��н����������Ϊ��"<<endl;

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<setw(3)<<number[i][j];
        }
        cout<<endl;
    }

    return 0;
}
