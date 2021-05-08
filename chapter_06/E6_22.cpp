/*
 ********************************************************
 *                                                      *
 *  功能：   本程序编写函数统计向量中不同元素的个数     *
 *                                                      *
 *  文件名： E6_22 .cpp                                 *
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

#include<string>

#include<vector>

using namespace std;

int number(vector<string> str)
{
    vector<string> a;
    a.push_back(str[0]);
    for(int i=0;i<str.size();i++)
    {
        for(int j=0;j<a.size();j++)
        {
            if(str[i]==a[j]) break;
            if(j==a.size()-1)
            {
                a.push_back(str[i]);
            }
        }
    }
    int x=a.size();
    return x;
}
int main()
{
    string x;
    vector<string> str;
    cout<<"请输入字符串向量: ";
    while(cin>>x)
    {
        str.push_back(x);
        if (cin.get() == '\n')  break;
    }
    cout<<"该向量中不同元素的个数为: "<<number(str);
    return 0;
}
