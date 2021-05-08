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

bool same_elements(int a[],int b[],int size_)
{
    int num1=0,num2=0;
    int flag=1;
    for(int now=0;now<size_;now++)
    {
        for(int j=0;j<size_;j++)
        {
            if(a[now]==b[j])
                num2++;
            if(a[now]==a[j])
                num1++;
        }
        if(num1!=num2)
        {
            flag=0;
        }
        num1=0;
        num2=0;
    }
    if(flag)
        return true;
    else
        return false;
}

int main()
{
    int siz;
    cout << "输入两个数组的大小：";
    cin >> siz;
    const int size_=siz;
    int a[size_],b[size_];
    cout << "输入数组a：";
    for(int i=0;i<size_;i++)
        cin >> a[i];

    cout << "输入数组b：";
    for(int i=0;i<size_;i++)
        cin >> b[i];

    if(same_elements(a,b,size_))
        cout << "具有相同的元素";
    else
        cout << "没有具有相同的元素";
    return 0;
}
