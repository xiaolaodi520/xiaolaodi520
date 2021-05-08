/*
 ********************************************************
 *                                                      *
 *  功能：   本程序编写函数用星号显示数组中的值         *
 *                                                      *
 *  文件名： E6_16.cpp                                  *
 *                                                      *
 *  作者：   Aohan ZHANG                                *
 *                                                      *
 *  单位：   河南大学计算机与信息工程学院               *
 *                                                      *
 *  E-mail:  2208143652@qq.com                          *
 *                                                      *
 *  时间：   2021年5月3日                               *
 *                                                      *
 *  版本：   1.0                                        *
 *                                                      *
 ********************************************************
 */
#include <iostream>

using namespace std;


void bar_chart(double values[],int size1)
{
    int largest=0;
    for(int i=1;i<size1;i++)
    {
        if(values[i]>values[largest])
        {
            largest=i;
        }
    }
    int b[size1];
    for(int j=0;j<size1;j++)
    {
        b[j]=40*values[j]/values[largest];
    }
    for(int i=0;i<size1;i++)
    {
        if(b[i]>=0)
        {
            for(int j=0; j<b[i]; j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
        else
        {
            cout<<"-";
            for(int j=0; j<-b[i]; j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
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
