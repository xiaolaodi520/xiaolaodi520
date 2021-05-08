/*
 ********************************************************
 *                                                      *
 *  功能：   本程序编写函数将两个向量有序合成一个向量   *
 *                                                      *
 *  文件名： E6_20 .cpp                                 *
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

vector<int> merge_sorted(vector<int> a,vector<int> b)
{
    vector<int> c;
    int a1=0;
    int b1=0;
    while(b1<b.size()||a1<a.size())
    {
        if(a1<a.size()&&b1<b.size())
        {
            if(a[a1]<=b[b1])
            {
                c.push_back(a[a1]);
                a1++;
            }
            else
            {
                c.push_back(b[b1]);
                b1++;
            }
        }
        else if(a1==a.size()&&b1<b.size())
        {
            c.push_back(b[b1]);
            b1++;
        }
        else if(b1==b.size()&&a1<a.size())
        {
            c.push_back(a[a1]);
            a1++;
        }
        else break;
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
    d=merge_sorted(a,b);
    for(int i=0;i<d.size();i++)
    {
        cout<<d[i]<<" ";
    }
    return 0;
}
