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
#include <cmath>

using namespace std;

int alternating_sum(int a[],int len)
{
    int sum=0;
    for(int i=0;i<len;i++)
        sum+=pow(-1,i)*a[i];
    return sum;
}

int main()
{
    const int len=9;
    int a[len]={1,4,9,16,9,7,4,9,11};
    cout << "数组a为：";
    for(int i=0;i<len;i++)
        cout << a[i] << " ";
    cout << endl;
    int sum=alternating_sum(a,len);
    cout << "结果为：";
    cout << sum;
    return 0;
}
