
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

double diameter(int n)
{
    double d=0.127*pow(92,(36-n)/39);
    return d;
}
double copper_wire(double length,int n)
{
    double r=1.678*1e-8*4*length/(3.14*diameter(n)*diameter(n));
    return r;
}
double aluminum_wire_resistance(double length,int n)
{
    double r=2.82*1e-8*4*length/(3.14*diameter(n)*diameter(n));
    return r;
}


int main()
{
  cout<<copper_wire(3,30)<<endl;
  cout<<aluminum_wire_resistance(3,30)<<endl;


   return 0;
}
