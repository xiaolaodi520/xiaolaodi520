/*
 ********************************************************
 *                                                      *
 *  功能：   本程序编写函数将一个向量追加到另一个之后   *
 *                                                      *
 *  文件名： E6_18 .cpp                                 *
 *                                                      *
 *  作者：   Aohan ZHANG                                *
 *                                                      *
 *  单位：   河南大学计算机与信息工程学院               *
 *                                                      *
 *  E-mail:  2208143652@qq.com                          *
 *                                                      *
 *  时间：   2021年5月4日                               *
 *                                                      *
 *  版本：   1.0                                        *
 *                                                      *
 ********************************************************
 */
#include <iostream>

using namespace std;

void bar_chart(double values[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<values[i];j++)
            cout << "*";
        cout << endl;
    }

}
int main()
{
	int size;
	const int SIZE = size;
	int values[SIZE];
	for(int i=0;i<SIZE;i++)
		cin >> values[i];
	bar_chart(values,SIZE)
    return 0;
}
