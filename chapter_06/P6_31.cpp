
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
    for(int i=20;i<101;i++)
    {

        for(int j=0;j<300;j++)
        {

            if(i==60&&j<100)
            {
                pic.set(i,j,0,0,0);

            }
            pic.set(i,100,0,0,0);
            pic.set(i,180,0,0,0);
        if(j>100&&j<181)
        {
            pic.set(20,j,0,0,0);
            pic.set(100,j,0,0,0);
        }

        }
        }
        for(int i=160;i<241;i++)
    {

        for(int j=0;j<300;j++)
        {

            if(i==200&&j<180)
            {
                pic.set(i,j,0,0,0);

            }
            pic.set(i,180,0,0,0);
            pic.set(i,260,0,0,0);
        if(j>180&&j<261)
        {
            pic.set(160,j,0,0,0);
            pic.set(240,j,0,0,0);
        }

        }
        }
   pic.save("p31.png");
    return 0;
}




