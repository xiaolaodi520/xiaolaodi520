/*
 ********************************************************
 *                                                      *
 *  功能：   本程序编写函数将两个向量交替排列           *
 *                                                      *
 *  文件名： E6_19 .cpp                                 *
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

using namespace std;

vector<int> merge1(vector<int> a,vector<int> b)
{
    vector<int> c;
    if(a.size()>b.size())
    {
        for(int i=0;i<a.size();i++)
        {
            if(i<b.size())
            {
                c.push_back(b[i]);
                c.push_back(a[i]);
            }
            else
            {
                c.push_back(a[i]);
            }
        }
    }
    else
    {
        for(int i=0;i<b.size();i++)
        {
            if(i<a.size())
            {
                c.push_back(a[i]);
                c.push_back(b[i]);
            }
            else
            {
                c.push_back(b[i]);
            }
        }
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
    d=merge1(a,b);
    for(int i=0;i<d.size();i++)
    {
        cout<<d[i]<<" ";
    }

    return 0;
}
