
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
#include"Picture.h"
#include<vector>
#include"lodepng.h"
#include<cmath>
#include"picture.cpp"
#include"lodepng.cpp"
using namespace std;

int main()
{
    Picture pic("1.png");
    double a=9.8;
    double v0=5;
  for(int time=0;time<4;time++)
  {

       if(time%2==0)
       {
           for(int i=80*time;i<80*(time+1);i++)
   {
       for(int j=0;j<300;j++)
       {
           double t=(i-80*time)/v0;

           if((int)((a/2)*pow(t,2))==j)
           {

               pic.set(i,j,0,0,0);
           }
       }

   }
       }
        if(time%2!=0)
       {
           for(int i=80*time;i<80*(time+1);i++)
   {
       for(int j=0;j<300;j++)
       {
           double t=(i-80*time)/v0;

           if((int)((a/2)*pow(t,2))==j)
           {

               pic.set(80*(time+1)-i,j,0,0,0);
           }
       }

   }
       }


   v0/=2;
   if(v0<=0)
   {
       break;
   }
  }




    pic.save("p32.png");
    return 0;
}
