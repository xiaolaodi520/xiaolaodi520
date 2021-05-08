/*
 ******************************************************************
 *
 *  功能:     本程序主要是用于打印洪水地图
 *
 *  文件名:   P6_15.cpp
 *
 *  作者 :    Aohan Zhang
 *
 *  单位 :    河南大学计算机与信息工程学院
 *
 *  E-mail:   2208143652@qq.com
 *
 *  时间 :    2021年5月2日
 *
 *  版本 :    1.0
 *
 ******************************************************************
 */
#include<iostream>
#include<cmath>
#include<iomanip>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;

int num(string a)
{
    if(a=="M")
    {
        return 1000;
    }
    if(a=="I")
    {
        return 1;
    }
    if(a=="X")
    {
        return 10;
    }
    if(a=="C")
    {
        return 100;
    }
    if(a=="V")
    {
        return 5;
    }
    if(a=="L")
    {
        return 50;
    }

}
int main()
{
    int total=0;
    string str="MCMLXXVIII";
    while(str!="")
    {
        if(str.length()==1||num(str.substr(0,1))>=num(str.substr(1,1)))
        {
            total=total+num(str.substr(0,1));
            str=str.substr(1);

        }
        else
        {
            int difference=num(str.substr(1.1))-num(str.substr(0,1));
            total=total+difference;
            str=str.substr(2);

        }

    }
    cout<<total<<endl;



   return 0;
}
