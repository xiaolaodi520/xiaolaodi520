/*
 ********************************************************
 *                                                      *
 *  功能：   本程序用于查找二维数组是否相等             *
 *                                                      *
 *  文件名： E6_26 .cpp                                 *
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

int main()
{
    int row_a,loumn_a,row_b,loumn_b;
    cout<< "请确定数组a的行数和列数：";
    cin>>row_a>>loumn_a;
    int a[row_a][loumn_a];
    cout<< "请输入a数组：";
    for(int i=0;i<row_a;i++)
    {
        for(int j=0;j<loumn_a;j++)
        {
            cin>>a[i][j];
        }
    }

    cout<< "请确定数组b的行数和列数：";
    cin>>row_b>>loumn_b;
    int b[row_b][loumn_b];
    cout<< "请输入b数组：";
    for(int i=0;i<row_b;i++)
    {
        for(int j=0;j<loumn_b;j++)
        {
            cin>>b[i][j];
        }
    }

    bool b1,b2,b3;

    if(row_a==row_b)
    {
        b1=true;
        if(loumn_a==loumn_b)
        {
            b3=true;

            for(int i=0;i<row_a;i++)
            {
                for(int j=0;j<loumn_a;j++)
                {
                    if(a[i][j]!=b[i][j])
                    {
                        b2=false;
                        break;
                    }

                    else b2=true;
                }

                if(b2==false)
                {
                    break;
                }
            }
        }

        else b2=false;
    }
    else b1=false;

    if(b1==false) cout<< "两个数组的行数并不相等。"<<endl;
    else if(b3==false) cout<< "两个数组的行数相等但列数并不相等。"<<endl;
    else if(b2==false)cout<< "两个数组的行数和列数都相等但相应元素并不相等。"<<endl;
    else cout<< "两个数组完全相等。"<<endl;






    return 0;
}
