/*
 *********************************************************************************************************
 *
 * Function����������ֽ�ơ�
 *
 * FileName��P6_5.cpp
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
#include <vector>

using namespace std;

int main()
{
    srand(time(0));

    int d1=rand()%(9-1+1)+1;

    vector<int> values;

    for(int i=0; i<d1; i++)
    {
        int d2=rand()%(45/d1-45/(d1-1)+1)+45/(d1-1);

        values.push_back(d2);
    }
    bool flag=true;

    int counter=0;

    while(flag)
    {
        d1=9;

        for(int i=0; i<11; i++)
        {
            if(values[i]=i)
            {
                counter++;
            }
        }
        if(counter==10)

        {
            flag=false;
        }
    }
    return 0;
}
