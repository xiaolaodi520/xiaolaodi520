/*
 ********************************************************
 *                                                      *
 *  ���ܣ�   �������д������һ������׷�ӵ���һ��֮��   *
 *                                                      *
 *  �ļ����� E6_18 .cpp                                 *
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

bool have_same(int num,int b[],int b_size)
{
    int flag=0;
    for(int i=0;i<b_size;i++)
        if(num==b[i])
        {
            flag=1;
            break;
        }
    if(flag)
        return true;
    else
        return false;
}
bool same_set(int a[],int a_size,int b[],int b_size)
{
    int flag=1;
    for(int i=0;i<a_size;i++)
        if(!have_same(a[i],b,b_size))
        {
            flag=0;
        }
    if(flag)
        return true;
    else
        return false;
}
int main()
{
    const int a_size=9;
    const int b_size=8;
    int a[a_size]={1,4,9,16,9,7,4,9,11};
    int b[b_size]={11,11,7,9,16,4,1};

    cout << "a���飻";
    for(int i=0;i<a_size;i++)
        cout << a[i] << " ";
    cout << endl;

    cout << "b���飻";
    for(int i=0;i<b_size;i++)
        cout << b[i] << " ";
    cout << endl;

    if(same_set(a,a_size,b,b_size))
        cout << "��������Ԫ����ͬ";
    else
        cout << "��������Ԫ�ز�ͬ";
    return 0;
}
