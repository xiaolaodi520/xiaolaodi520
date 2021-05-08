/*
 *********************************************************************************************************
 *
 * Function：票价系统。
 *
 * FileName：P6_8.cpp
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
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    int arr[9][10];

    for(int i=0; i<9; i++)
    {
        for(int j=0; j<10; j++)
        {
            int d1=10*(rand()%(5-1+1)+1);

            arr[i][j]=d1;
        }
    }

    cout <<"座次表于价格表为："<<endl;

    for(int i=0; i<9; i++)
    {
        for(int j=0; j<10; j++)
        {


            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int m,n;

    cout << "Please enter the seat that you want to sit.";

    cin>>m>>n;

    cout <<" Your choice is: "<< m << "raw" <<" " <<n<<"column"<<endl;

    cout << "Price is :" <<arr[m][n] <<endl;

    return 0;
}
