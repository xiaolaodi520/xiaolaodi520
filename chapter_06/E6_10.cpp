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

using namespace std;

bool same_elements(int a[],int b[],int size_)
{
    int num1=0,num2=0;
    int flag=1;
    for(int now=0;now<size_;now++)
    {
        for(int j=0;j<size_;j++)
        {
            if(a[now]==b[j])
                num2++;
            if(a[now]==a[j])
                num1++;
        }
        if(num1!=num2)
        {
            flag=0;
        }
        num1=0;
        num2=0;
    }
    if(flag)
        return true;
    else
        return false;
}

int main()
{
    int siz;
    cout << "������������Ĵ�С��";
    cin >> siz;
    const int size_=siz;
    int a[size_],b[size_];
    cout << "��������a��";
    for(int i=0;i<size_;i++)
        cin >> a[i];

    cout << "��������b��";
    for(int i=0;i<size_;i++)
        cin >> b[i];

    if(same_elements(a,b,size_))
        cout << "������ͬ��Ԫ��";
    else
        cout << "û�о�����ͬ��Ԫ��";
    return 0;
}
