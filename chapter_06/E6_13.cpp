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

int neighbor_average(int values[][3],int row,int column)
{
    int sum;
    sum=values[row-1][column]+values[row-1][column+1]+values[row-1][column-1]+values[row][column+1]+values[row][column-1]+values[row+1][column]+values[row+1][column+1]+values[row][column-1];
    return sum;
}

int main()
{
    const int COUNTRIES=3;
    const int row=3;
    int values[row][COUNTRIES];
    for(int i=-1;i<row;i++)
        for(int j=-1;j<row;j++)
            values[i][j]=0;

    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            values[i][j]=i*3+j+1;

    int a,column;
    cin >> a >> column;
    cout << neighbor_average(values,a,column);
    return 0;
}
