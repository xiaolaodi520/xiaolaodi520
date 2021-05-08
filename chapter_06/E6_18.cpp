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

#include<vector>

#include<string>

using namespace std;

vector<int> append(vector<int> a,vector<int> b)
{
    vector<int> c;
    for(int i=0;i<a.size();i++)
    {
        c.push_back(a[i]);
    }
    for(int i=0;i<b.size();i++)
    {
        c.push_back(b[i]);
    }
    return c;
}
int main()
{
    vector<int> a;
    cout<<"请输入a向量中的元素: ";
    int input;
    while(cin>>input)
    {
        a.push_back(input);
    }
    vector<int> b;
    cout<<"请输入向量b中的元素: ";
    cin.clear();
    string item;
    cin>>item;
    int input1;
    while(cin>>input1)
    {
        b.push_back(input1);
    }
    vector<int> d;
    d=append(a,b);
    for(int i=0;i<d.size();i++)
    {
        cout<<d[i]<<" ";
    }
    return 0;
}
