/*
 *********************************************************************************************************
 *
 * Function���÷���
 *
 * FileName��P6_7.cpp
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

using namespace std;

bool huan_fang(int arr[][4]);

int main()
{
    int arr[4][4];

    cout << "���������飺";

    for(int i=0; i<4; i++)

    {
        for(int j=0; j<4; j++)
        {
            cin>>arr[i][j];
        }
    }

    cout << "�����������Ϊ��";

    for(int i=0; i<4; i++)

    {
        for(int j=0; j<4; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int flag=huan_fang(arr);

    if(flag)

    {
        cout <<" This is a huan fang .";
    }
    else
    {
        cout << "This is not a huan fang.";
    }

    return 0;
}
bool huan_fang(int arr[][4])
{
    for(int i=0; i<4; i++)

    {
        for(int j=0; j<4; j++)
        {
            int sum=0;

            sum+=arr[i][j];

            int sum1=0;

            sum1+=arr[i+1][j];

        }

    }
    if(sum1!=sum)
           {
               return false;
           }
           else
           {
               return true;
           }
}
