/*
 *********************************************************************************************************
 *
 * Function��Ʊ��ϵͳ��
 *
 * FileName��P6_8.cpp
 *
 * ���ߣ�   Aohan Zhang
 *
 * ��λ��   ���ϴ�ѧ���������Ϣ����ѧԺ
 *
 * E-mail:  2208143652@qq.com
 *
 * ʱ�䣺   2021��5��1��
 *
 * Version��   1.0
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

    cout <<"���α��ڼ۸��Ϊ��"<<endl;

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
