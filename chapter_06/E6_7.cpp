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

void reverse(int a[],int len)
{
    const int n=len;
    int b[n];
    for(int i=0;i<n;i++)
        b[i]=a[i];
    for(int i=0;i<n;i++)
        a[i]=b[n-i-1];
}
int main()
{
    const int len=9;
    int a[9]={1,4,9,16,9,7,4,9,11};
    cout << "����a��";
    for(int i=0;i<len;i++)
        cout << a[i] << " ";
    cout << endl;
    reverse(a,len);
    cout << "ת����";
    for(int i=0;i<len;i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}
