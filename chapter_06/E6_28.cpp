/*
 ********************************************************
 *                                                      *
 *  ���ܣ�   ���������ڽ�����ά����ĳ����               *
 *                                                      *
 *  �ļ����� E6_28 .cpp                                 *
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
    int number[4][4]=
    {
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

    int number_lumon[4];
    for(int i=0;i<4;i++)
    {
        number_lumon[i]=number[i][0];
        number[i][0]=number[i][1];
        number[i][1]=number_lumon[i];

    }

    cout<< "������һ�к͵ڶ���֮�������Ϊ��"<<endl;
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
