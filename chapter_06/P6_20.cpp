
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
 #include <iostream>

using namespace std;

double num(double a,int n)
{
    double an;
    if(n==1)
    {
         an=a;
    }
    else
    {
        an=a*num(a,n-1);
    }
    return an;
}
int main()
{
    cout<<num(2.0,5)<<endl;
    return 0;
}
