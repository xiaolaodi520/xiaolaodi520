
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

double f(double r1,double r2,double n,double d)
{
    double a=1/((n-1)*(1/r1-1/r2+(n-1)*d/(n*r1*r2)));
    return a;
}
int main()
{
   cout<<f(1,2,0.5,0.1)<<endl;


   return 0;
}
