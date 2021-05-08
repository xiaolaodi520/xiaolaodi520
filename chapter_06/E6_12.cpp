/*
 ********************************************************
 *                                                      *
 *  功能：   本程序编写函数将一个向量追加到另一个之后   *
 *                                                      *
 *  文件名： E6_18 .cpp                                 *
 *                                                      *
 *  作者：   Aohan ZHANG                                *
 *                                                      *
 *  单位：   河南大学计算机与信息工程学院               *
 *                                                      *
 *  E-mail:  2208143652@qq.com                          *
 *                                                      *
 *  时间：   2021年5月4日                               *
 *                                                      *
 *  版本：   1.0                                        *
 *                                                      *
 ********************************************************
 */
#include <iostream>
#include <random>
#include <time.h>
#include <algorithm>

using namespace std;


int main()
{
    srand(time(0));
    int a[20];
    for(int i=0;i<20;i++)
    {
        a[i]=rand()%100;
    }
    sort(a,a+20);
    for(int i=0;i<20;i++)
        cout << a[i] << " ";
    return 0;
}
