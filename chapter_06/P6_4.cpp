/*
 *********************************************************************************************************
 *
 * Function����д����������䡣
 *
 * FileName��P6_4.cpp
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

int next_visitor( bool ocupied[] ,int stalls);

int main()
{
    bool ocupied[10];

    for(int i=0;i<10;i++)
    {
        ocupied[i]=1;
    }

    int stalls;

    cout <<"�������һ����λ��(0��10֮�䣺";

    cin>>stalls;

    int pos=next_visitor(ocupied,stalls);

    cout <<"The next position is :" << pos <<endl;

    return 0;
}
int next_visitor( bool ocupied[] ,int stalls)

{
    if(stalls<=5)
    {
        return stalls+(10-stalls)/2;
    }
    else
    {
        return (10-stalls)/2-stalls;
    }
}
