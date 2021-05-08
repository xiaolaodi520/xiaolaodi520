
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
using namespace std;

int main()
{
   const double t=0.01;
   const double g=9.81;
   double v,s=0,S=0,T=0,T1=0;
   cin>>v;
   while(S<=0||T1==0)
   {
       S=-g*T1*T1/2+T1*v;
       T1;
       cout<<S<<" ";
   }

   while(s<=0||T==0)
   {
       s=s+v*t;
       v=v-g*t;
       T-t+0.01;
       if(T==1)
       {


           cout<<s<<"";
       }
   }



    return 0;
}
