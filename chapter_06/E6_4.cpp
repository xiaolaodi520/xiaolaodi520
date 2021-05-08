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

using namespace std;

int main()
{
    srand(time(0));
    int a[1000];
    int current_size;
    cin >> current_size;
    int MIN=a[0];
    for(int i=0;i<current_size;i++)
        a[i]=rand()%100;
    for(int i=0;i<current_size;i++)
        cout << a[i] << " " ;
    cout << endl;

    //找到最小值
    for(int i=0;i<current_size;i++)
    {
        if(MIN>a[i])
        {
            MIN=a[i];
        }
    }

    //删除最小值
    for(int i=0;i<current_size;i++)
    {
        if(MIN==a[i])
        {
            for(int j=i;j<current_size;j++)
            {
                a[j]=a[j+1];
            }
            current_size--;
        }
    }

    //打印结果
    for(int i=0;i<current_size;i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
