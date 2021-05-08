/*
 ********************************************************
 *                                                      *
 *  功能：   本程序编写函数将一个向量追加到另一个之后   *
 *                                                      *
 *  文件名： E6_18 .cpp                                 *
 *                                                      *
 *  作者：   Aohan ZHANG                              *
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
    const int n=10;
    int a[n];
    for(int i=0;i<n;i++)
    {
        a[i]=rand()%1000;
    }

    cout << "位于偶数下标的所有元素：" ;
    for(int i=1;i<n;i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    cout << "所有值为偶数的元素：" ;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
            cout << a[i] << " ";
    }
    cout << endl;

    cout << "逆序输出所有的值：" ;
    for(int i=n-1;i>=0;i--)
        cout << a[i] << " ";
    cout << endl;

    cout << "第一个和最后一个元素：" << a[0] << " " << a[9] ;
    return 0;
}
