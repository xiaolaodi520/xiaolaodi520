/*
 ********************************************************
 *                                                      *
 *  ���ܣ�   �������д����ͳ�������в�ͬԪ�صĸ���     *
 *                                                      *
 *  �ļ����� E6_22 .cpp                                 *
 *                                                      *
 *  ���ߣ�   Aohan ZHANG                                *
 *                                                      *
 *  ��λ��   ���ϴ�ѧ���������Ϣ����ѧԺ               *
 *                                                      *
 *  E-mail:  2208143652@qq.com                          *
 *                                                      *
 *  ʱ�䣺   2021��5��4��                               *
 *                                                      *
 *  �汾��   1.0                                        *
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
    cout<<"�������ַ�������: ";
    while(cin>>x)
    {
        str.push_back(x);
        if (cin.get() == '\n')  break;
    }
    cout<<"�������в�ͬԪ�صĸ���Ϊ: "<<number(str);
    return 0;
}
