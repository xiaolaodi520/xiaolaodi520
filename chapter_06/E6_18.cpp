/*
 ********************************************************
 *                                                      *
 *  ���ܣ�   �������д������һ������׷�ӵ���һ��֮��   *
 *                                                      *
 *  �ļ����� E6_18 .cpp                                 *
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
    cout<<"������a�����е�Ԫ��: ";
    int input;
    while(cin>>input)
    {
        a.push_back(input);
    }
    vector<int> b;
    cout<<"����������b�е�Ԫ��: ";
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
