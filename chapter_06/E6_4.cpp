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
#include <random>
#include <time.h>

using namespace std;

int main()
{
    srand(time(0));
    int a[1000];
    int current_size;
    cin >> current_size;
    int MIN=a[0];
    for(int i=0;i<current_size;i++)
        a[i]=rand()%100;
    for(int i=0;i<current_size;i++)
        cout << a[i] << " " ;
    cout << endl;

    //�ҵ���Сֵ
    for(int i=0;i<current_size;i++)
    {
        if(MIN>a[i])
        {
            MIN=a[i];
        }
    }

    //ɾ����Сֵ
    for(int i=0;i<current_size;i++)
    {
        if(MIN==a[i])
        {
            for(int j=i;j<current_size;j++)
            {
                a[j]=a[j+1];
            }
            current_size--;
        }
    }

    //��ӡ���
    for(int i=0;i<current_size;i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
