/*
 ********************************************************
 *                                                      *
 *  ���ܣ�   ���������ڲ��Ҷ�ά����Ԫ���Ƿ����         *
 *                                                      *
 *  �ļ����� E6_24 .cpp                                 *
 *                                                      *
 *  ���ߣ�   Aohan ZHANG                                *
 *                                                      *
 *  ��λ��   ���ϴ�ѧ���������Ϣ����ѧԺ               *
 *                                                      *
 *  E-mail:  2208143652@qq.com                          *
 *                                                      *
 *  ʱ�䣺   2021��5��4��                               *
 *                                                      *
 *  �汾��   1.0                                        *
 *                                                      *
 ********************************************************
 */

#include <iostream>

using namespace std;

int main()
{
    int row;loumn;
    cout<< "��ȷ���˶�ά�����������������";
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


    if(b) cout<< "�������е�����Ԫ�ض�����ͬ�ġ�"<<endl;
    else cout<< "�������е�����Ԫ�ز����Ƕ���ͬ��"<<endl;

    return 0;
}
