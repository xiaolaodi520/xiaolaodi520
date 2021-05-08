
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
#include<vector>
#include<cmath>
#include"picture.cpp"
#include"lodepng.cpp"
using namespace std;

int main()
{

        Picture pic("queen-mary.png");
        for(int x=0;x<pic.width();x++)
        {
            for(int y=0;y<pic.height();y++)
            {
                if((y-x)%7==0)
                {
                    pic.set(x,y,0,0,0);
                }
            }
        }
        pic.save("P6_28.png");
    return 0;
}
