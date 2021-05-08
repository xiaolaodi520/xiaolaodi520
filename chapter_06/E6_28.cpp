/*
 ********************************************************
 *                                                      *
 *  功能：   本程序用于交换二维数组某两列               *
 *                                                      *
 *  文件名： E6_28 .cpp                                 *
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
#include <iomanip>
using namespace std;

int main()
{
    int number[4][4]=
    {
        { 1, 2, 3, 4},
        { 5, 6, 7, 8},
        { 9,10,11,12},
        {13,14,15,16},
    };
    cout<< "原数组为："<<endl;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<setw(3)<<number[i][j];
        }
        cout<<endl;
    }

    int number_lumon[4];
    for(int i=0;i<4;i++)
    {
        number_lumon[i]=number[i][0];
        number[i][0]=number[i][1];
        number[i][1]=number_lumon[i];

    }

    cout<< "交换第一列和第二列之后的数组为："<<endl;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<setw(3)<<number[i][j];
        }
        cout<<endl;
    }

    return 0;
}
