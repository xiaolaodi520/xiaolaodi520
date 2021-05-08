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
    cout << "输入数组的大小：";
    cin >> A_SIZE;
    const int imput=A_SIZE;
    int A[imput];

    cout << "输入数组的元素：";
    for(int i;i<A_SIZE;i++)
        cin >> A[i];

    remove_duplicates(A,A_SIZE);
    for(int i=0;i<A_SIZE;i++)
        cout << A[i] << " ";
    return 0;
}
