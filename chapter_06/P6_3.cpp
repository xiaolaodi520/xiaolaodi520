/*
 *********************************************************************************************************
 *
 * Function�����1��10��ֵ������У����Ҳ��ظ���
 *
 * FileName��P6_3.cpp
 *
 * ���ߣ�   Aohan Zhang
 *
 * ��λ��   ���ϴ�ѧ���������Ϣ����ѧԺ
 *
 * E-mail:  2208143652@qq.com
 *
 * ʱ�䣺   2021��5��1��
 *
 * Version��   1.0
 *
 *********************************************************************************************************
 */

#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{
    srand(time(0));

    int a[10];

    int n=10;

    int arr[n];

    for(int i=0; i<10; i++)
    {
        arr[i]=i+1;
    }

    for(int j=9; j>-1; j--)
    {
        int d1=rand()%(j-0+1)+0;

        int temp;

        temp=arr[d1];

        for(int i=d1+1;i<n;i++)
        {
            arr[i-1]=arr[i];
        }

        n--;

        a[j]=temp;

    }
     cout << "�������Ϊ��";

    for(int n=0; n<10; n++)
    {
        cout << a[n]<< " ";
    }

    return 0;
}
