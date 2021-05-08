/*
 ********************************************************
 *                                                      *
 *  ���ܣ�   �������д�������Ǻ���ʾ�����е�ֵ         *
 *                                                      *
 *  �ļ����� E6_15.cpp                                  *
 *                                                      *
 *  ���ߣ�   zhangqi  Chen                              *
 *                                                      *
 *  ��λ��   ���ϴ�ѧ���������Ϣ����ѧԺ               *
 *                                                      *
 *  E-mail:  2208143652@qq.com                          *
 *                                                      *
 *  ʱ�䣺   2021��5��3��                               *
 *                                                      *
 *  �汾��   1.0                                        *
 *                                                      *
 ********************************************************
 */

#include <iostream>

#include<string>

using namespace std;

void bar_chart(double a[],int size1)
{
    int largest=0;
    for(int i=1;i<size1;i++)
    {
        if(a[i]>a[largest])
        {
            largest=i;
        }
    }
    int c[size1];
    for(int i=0;i<size1;i++)
    {
        c[i]=20*a[i]/a[largest];
    }
    string b[20][size1];
    for(int i=0;i<size1;i++)
    {
        int j;
        for(j=0;j<20-c[i];j++)
        {
            b[j][i]=" ";
        }
        if(j>=20-c[i])
        {
            for(j=20-c[i]; j<20; j++)
            {
                b[j][i]="*";
            }
        }

    }
    for(int i=0;i<20;i++)
    {
        for(int j=0;j<size1;j++)
        {
            cout<<b[i][j];
        }
        cout<<endl;
    }
}
int main()
{
    double a[100];
    double input;
    int size1=0;
    while(cin>>input)
    {
        if(size1<100)
        {
            a[size1]=input;
            size1++;
        }

    }
    bar_chart(a,size1);
    return 0;
}
