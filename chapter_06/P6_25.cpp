
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


double angle(double x)
{
    const double angle1=8.0/180*314;
    double a=6-(tan(angle1)*x);
    double b=24+a;
    double angle2=atan(b/x)-atan(a/x);
    return angle2/3.14*180;
}
int main()
{
  cout<<angle(3)<<endl;


   return 0;
}
