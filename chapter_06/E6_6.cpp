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
#include <cmath>

using namespace std;

int alternating_sum(int a[],int len)
{
    int sum=0;
    for(int i=0;i<len;i++)
        sum+=pow(-1,i)*a[i];
    return sum;
}

int main()
{
    const int len=9;
    int a[len]={1,4,9,16,9,7,4,9,11};
    cout << "����aΪ��";
    for(int i=0;i<len;i++)
        cout << a[i] << " ";
    cout << endl;
    int sum=alternating_sum(a,len);
    cout << "���Ϊ��";
    cout << sum;
    return 0;
}
