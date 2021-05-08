/*
 ********************************************************
 *                                                      *
 *  功能：   本程序用于查找二维数组元素是否相等         *
 *                                                      *
 *  文件名： E6_24 .cpp                                 *
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
    int row;loumn;
    cout<< "请确定此二维数组的行数和列数：";
    cin>>row>>loumn;
    int a[row][loumn];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<loumn;j++)
        {
            cin>>a[i][j];
        }
    }

    bool b=true;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<loumn;j++)
        {
            for(int k=0;k<row;k++)
            {
                for(int h=0;h<loumn;h++)
                {
                    if(a[i][j]!=a[k][h])
                    {
                        b=false;
                        break;
                    }

                    else continue;
                }

                if(b==false)
                {
                    break;
                }

                else continue;
            }

            if(b==false)
                {
                    break;
                }

                else continue;
        }

        if(b==false)
                {
                    break;
                }

                else continue;
    }


    if(b) cout<< "此数组中的所有元素都是相同的。"<<endl;
    else cout<< "此数组中的所有元素并不是都相同。"<<endl;

    return 0;
}
