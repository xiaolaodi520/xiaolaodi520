/*
 ********************************************************
 *                                                      *
 *  ���ܣ�   �������д������������������ϳ�һ������   *
 *                                                      *
 *  �ļ����� E6_20 .cpp                                 *
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
    d=merge_sorted(a,b);
    for(int i=0;i<d.size();i++)
    {
        cout<<d[i]<<" ";
    }
    return 0;
}
