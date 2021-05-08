/*
 ********************************************************
 *                                                      *
 *  功能：   本程序编写函数向量中大写字母的元素移至前面 *
 *                                                      *
 *  文件名： E6_21 .cpp                                 *
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

void exchage(vector<string>& str)
{
    int z=0;

    for(int i=0;i<str.size();i++)
    {
        if(str[i]=="A"||str[i]=="B"||str[i]=="C"||str[i]=="D"||str[i]=="E"||str[i]=="F"||str[i]=="G"||str[i]=="H"||str[i]=="I"||str[i]=="J"||str[i]=="K"||str[i]=="L"||str[i]=="M"||str[i]=="N"||str[i]=="O"||str[i]=="P"||str[i]=="Q"||str[i]=="R"||str[i]=="S"||str[i]=="T"||str[i]=="U"||str[i]=="V"||str[i]=="W"||str[i]=="X"||str[i]=="Y"||str[i]=="Z")
        {
            string str2=str[i];
            for(int j=i-1;j>=z;j--)
            {
                str[j+1]=str[j];

            }
            str[z]=str2;
            z++;
        }
    }
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
    exchage(str);
    for(int i=0;i<str.size();i++)
    {
        cout<<str[i]<<" ";
    }
    return 0;
}
