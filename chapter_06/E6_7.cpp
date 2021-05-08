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

using namespace std;

void reverse(int a[],int len)
{
    const int n=len;
    int b[n];
    for(int i=0;i<n;i++)
        b[i]=a[i];
    for(int i=0;i<n;i++)
        a[i]=b[n-i-1];
}
int main()
{
    const int len=9;
    int a[9]={1,4,9,16,9,7,4,9,11};
    cout << "数组a：";
    for(int i=0;i<len;i++)
        cout << a[i] << " ";
    cout << endl;
    reverse(a,len);
    cout << "转换后：";
    for(int i=0;i<len;i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}
