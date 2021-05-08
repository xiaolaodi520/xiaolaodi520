
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

double v(double r1,double r2,double b)
{
    double a=3.14*b*(r1*r1+r2*r2+r1*r2)/3;
    return a;
}
double s(double r1,double r2,double b)
{
    double a=3.14*(r1+r2)*sqrt((r1-r2)*(r1-r2)+b)+3.14*r1*r1;
    return a;
}
int main()
{
   cout<<v(1,1,3)<<endl;
   cout<<s(1,1,3)<<endl;


   return 0;
}
