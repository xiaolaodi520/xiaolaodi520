/*
 *********************************************************************************************************
 *
 * Function����ӡ��Բ���ŵ�һ��ֵ��
 *
 * FileName��P6_2.cpp
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
#include <vector>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    vector<int> values;

    for(int i=0; i<20; i++)
    {
        int d1=rand()%(6-1+1)+1;

        values.push_back(d1);
    }

    bool in_run=false;
    for(int i=0 ; i<values.size(); i++)
    {
        if(in_run)
        {
            if(values[i]!=values[i-1])
            {
                cout << ")"<<" ";
            }

            in_run=false;
        }

        if(!in_run)
        {
            if(values[i]==values[i+1])
            {
                cout << "("<<" ";
            }

            in_run=true;
        }


        cout<<values[i]<<" ";

    }
    return 0;
}
