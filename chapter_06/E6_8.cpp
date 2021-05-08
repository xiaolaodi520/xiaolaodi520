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

bool equals(int a[],int a_size,int b[],int b_size)
{
    int flag=0;
    if(a_size==b_size)
    {
        for(int i=0;i<a_size;i++)
        {
            if(a[i]!=b[i])
            {
                flag=0;
                return false;
                break;
            }
        }
        if(flag==1)
            return true;
    }
    else
        return false;
}

int main()
{
    int a_size0,b_size0;
    cin >> a_size0 >> b_size0;
    const int a_size=a_size0,b_size=b_size0;
    int a[a_size],b[b_size];
    for(int i=0;i<a_size;i++)
        cin >> a[i] ;
    for(int i=0;i<b_size;i++)
        cin >> b[i];
    cout << equals(a,a_size0,b,b_size0);
    return 0;
}
