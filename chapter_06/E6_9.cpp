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

bool have_same(int num,int b[],int b_size)
{
    int flag=0;
    for(int i=0;i<b_size;i++)
        if(num==b[i])
        {
            flag=1;
            break;
        }
    if(flag)
        return true;
    else
        return false;
}
bool same_set(int a[],int a_size,int b[],int b_size)
{
    int flag=1;
    for(int i=0;i<a_size;i++)
        if(!have_same(a[i],b,b_size))
        {
            flag=0;
        }
    if(flag)
        return true;
    else
        return false;
}
int main()
{
    const int a_size=9;
    const int b_size=8;
    int a[a_size]={1,4,9,16,9,7,4,9,11};
    int b[b_size]={11,11,7,9,16,4,1};

    cout << "a数组；";
    for(int i=0;i<a_size;i++)
        cout << a[i] << " ";
    cout << endl;

    cout << "b数组；";
    for(int i=0;i<b_size;i++)
        cout << b[i] << " ";
    cout << endl;

    if(same_set(a,a_size,b,b_size))
        cout << "两个数组元素相同";
    else
        cout << "两个数组元素不同";
    return 0;
}
