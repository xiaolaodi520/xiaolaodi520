/*
 ********************************************************
 *                                                      *
 *  ���ܣ�   ���������ڲ��Ҷ�ά�����Ƿ����             *
 *                                                      *
 *  �ļ����� E6_26 .cpp                                 *
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
    int row_a,loumn_a,row_b,loumn_b;
    cout<< "��ȷ������a��������������";
    cin>>row_a>>loumn_a;
    int a[row_a][loumn_a];
    cout<< "������a���飺";
    for(int i=0;i<row_a;i++)
    {
        for(int j=0;j<loumn_a;j++)
        {
            cin>>a[i][j];
        }
    }

    cout<< "��ȷ������b��������������";
    cin>>row_b>>loumn_b;
    int b[row_b][loumn_b];
    cout<< "������b���飺";
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

    if(b1==false) cout<< "�������������������ȡ�"<<endl;
    else if(b3==false) cout<< "���������������ȵ�����������ȡ�"<<endl;
    else if(b2==false)cout<< "�����������������������ȵ���ӦԪ�ز�����ȡ�"<<endl;
    else cout<< "����������ȫ��ȡ�"<<endl;






    return 0;
}
