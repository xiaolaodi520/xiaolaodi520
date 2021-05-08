/*
 *********************************************************************************************************
 *
 * Function：打印用圆括号的一趟值。
 *
 * FileName：P6_2.cpp
 *
 * 作者：   Aohan Zhang
 *
 * 单位：   河南大学计算机与信息工程学院
 *
 * E-mail:  2208143652@qq.com
 *
 * 时间：   2021年5月1日
 *
 * Version：   1.0
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
