
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
   for(int x=0;x<8;x++)
   {
       for(int y=0;y<8;y++ )
       {

            for(int i=40*x;i<40*(x+1);i++)
    {
        for(int j=40*y;j<40*(y+1);j++)
        {
            if(x%2==0&&y%2==0)
            {
                pic.set(i,j,0,0,0);
            }
            if(x%2==1&&y%2==0&&y%4==0)
            {
                pic.set(i,40*y+20,0,0,0);
               if(i-40*x==2*(j-40*y)||i-40*x==(80-2*(j-40*y)))
               {
                   pic.set(i,j,0,0,0);
               }


            }
             if(x%2==1&&y%2==0&&y%4!=0)
            {
                pic.set(i,40*y+20,0,0,0);
               if(i-40*x==40-2*(j-40*y)||i-40*x==(2*(j-40*y)-40))
               {
                   pic.set(i,j,0,0,0);
               }


            }


        }

    }
       }
   }


   pic.save("p30.png");
    return 0;
}





