/*
 ********************************************************
 *                                                      *
 *  ���ܣ�   �������д������һ������׷�ӵ���һ��֮��   *
 *                                                      *
 *  �ļ����� E6_18 .cpp                                 *
 *                                                      *
 *  ���ߣ�   Aohan ZHANG                              *
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
#include <random>
#include <time.h>

using namespace std;

int main()
{
    srand(time(0));
    const int n=10;
    int a[n];
    for(int i=0;i<n;i++)
    {
        a[i]=rand()%1000;
    }

    cout << "λ��ż���±������Ԫ�أ�" ;
    for(int i=1;i<n;i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    cout << "����ֵΪż����Ԫ�أ�" ;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
            cout << a[i] << " ";
    }
    cout << endl;

    cout << "����������е�ֵ��" ;
    for(int i=n-1;i>=0;i--)
        cout << a[i] << " ";
    cout << endl;

    cout << "��һ�������һ��Ԫ�أ�" << a[0] << " " << a[9] ;
    return 0;
}
