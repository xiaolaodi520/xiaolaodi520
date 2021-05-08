/*
 *********************************************************************************************************
 *
 * Function：编写函数放入隔间。
 *
 * FileName：P6_4.cpp
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

    cout <<"请输入第一个的位置(0到10之间：";

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
