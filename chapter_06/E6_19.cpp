/*
 ********************************************************
 *                                                      *
 *  ���ܣ�   �������д����������������������           *
 *                                                      *
 *  �ļ����� E6_19 .cpp                                 *
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
    d=merge1(a,b);
    for(int i=0;i<d.size();i++)
    {
        cout<<d[i]<<" ";
    }

    return 0;
}
