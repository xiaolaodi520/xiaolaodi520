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

void remove_duplicates(int A[],int A_SIZE)
{
    for(int i=0;i<A_SIZE;i++)
    {
        for(int j=i+1;j<A_SIZE;j++)
        {
            if(A[i]==A[j])
            {
                for(int k=j;k<A_SIZE-1;k++)
                {
                    A[k]=A[k+1];
                    A_SIZE--;
                }
            }
        }
    }
}

int main()
{
    int A_SIZE;
    cout << "��������Ĵ�С��";
    cin >> A_SIZE;
    const int imput=A_SIZE;
    int A[imput];

    cout << "���������Ԫ�أ�";
    for(int i;i<A_SIZE;i++)
        cin >> A[i];

    remove_duplicates(A,A_SIZE);
    for(int i=0;i<A_SIZE;i++)
        cout << A[i] << " ";
    return 0;
}
