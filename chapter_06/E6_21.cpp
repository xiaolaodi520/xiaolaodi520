/*
 ********************************************************
 *                                                      *
 *  ���ܣ�   �������д���������д�д��ĸ��Ԫ������ǰ�� *
 *                                                      *
 *  �ļ����� E6_21 .cpp                                 *
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
    cout<<"�������ַ�������: ";
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
