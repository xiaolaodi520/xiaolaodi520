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

void A(int a[],int len)
{
    swap(a[0],a[len-1]);

    //打印数组
    for(int i=0;i<len;i++)
        cout << a[i] << " " ;
    cout << endl;
}
void B(int a[],int len)
{
    int temp=a[len-1];
    for(int i=1;i<len;i++)
        a[i]=a[i-1];
    a[0]=temp;

    //打印数组
    for(int i=0;i<len;i++)
        cout << a[i] << " " ;
    cout << endl;
}
void C(int a[],int len)
{
    for(int i=1;i<len;i+=2)
        a[i]=0;
    //打印数组
    for(int i=0;i<len;i++)
        cout << a[i] << " " ;
    cout << endl;
}
void D(int a[],int len)
{
    int MAX;
    int a1=a[0],a2=a[len-1];
    for(int i=1;i<len-1;i++)
    {
        MAX=max(a[i-1],a[i]);
        MAX=max(a[i],a[i+1]);
        for(int j=i-1;j<=i+1;j++)
            a[j]=MAX;
    }
    a[0]=a1;
    a[len-1]=a2;
    //打印数组
    for(int i=0;i<len;i++)
        cout << a[i] << " " ;
    cout << endl;
}
void E(int a[],int len)
{
    if(len%2==1)
    {
        for(int i=len/2;i<len;i++)
            a[i]=a[i+1];
        len--;
    }
    else
    {
        for(int i=len/2;i<len;i++)
            a[i]=a[i+1];
        len-=2;
    }
    //打印数组
    for(int i=0;i<len;i++)
        cout << a[i] << " " ;
    cout << endl;
}
void F(int a[],int len)
{
    int b[100],c[100];
    int j=0;
    int n1=0,n2=0;
    for(int i=0;i<len;i+=2)
    {
        b[j]=a[i];
        j++;
        n1=j;
    }
    j=0;
    for(int i=1;i<len;i+=2)
    {
        c[j]=a[i];
        j++;
        n2=j;
    }

    //打印数组
    cout << n1 << " " << n2 << endl;
    for(int i=0;i<n1;i++)
        cout << b[i] << " ";
    cout << endl;
    for(int i=0;i<n2;i++)
        cout << c[i] << " " ;
    cout << endl;
}
bool G(int a[],int len)
{
    int flag=1;
    for(int i=0;i<len-1;i++)
    {
        if(a[i]!=a[i+1])
            flag=0;
    }
    if(flag)
        return true;
    else
        return false;
}
int H(int a[],int len)
{
    int max1=0,max2=0;
    int max1_=0;
    for(int i=0;i<len;i++)
    {
        if(max1<a[i])
        {
             max1=a[i];
             max1_=i;
        }
    }
    for(int i=0;i<len;i++)
    {
        if(max2<a[i]&&max1_!=i)
            max2=a[i];
    }
    return max2;
}
bool I(int a[],int len)
{
    int flag=0;
    for(int i=0;i<len;i++)
    {
        if(a[i]>a[i+1])
        {
            flag=1;
            break;
        }
    }
    if(flag)
        return false;
    else
        return true;
}
bool J(int a[],int len)
{
    int flag=0;
    for(int i=0;i<len-1;i++)
    {
        if(a[i]==a[i+1])
            flag=1;
    }
    if(flag)
        return true;
    else
        return false;
}
bool K(int a[],int len)
{
    int flag=0;
    for(int i=0;i<len;i++)
    {
        for(int j=i;j<len;j++)
        {
            if(a[i]==a[j])
            {
                flag=1;
                break;
            }
        }
        if(flag)
            break;
    }
    if(flag)
        return true;
    else
        return false;
}

int main()
{
    const int len=10;
    int a[len];
    for(int i=0;i<len;i++)
    {
        a[i]=i+1;
    }
    cout << " 函数A：";
    A(a,len);

    for(int i=0;i<len;i++)
    {
        a[i]=i+1;
    }
    cout << " 函数B：";
    B(a,len);


    for(int i=0;i<len;i++)
    {
        a[i]=i+1;
    }
    cout << " 函数C：";
    C(a,len);


    for(int i=0;i<len;i++)
    {
        a[i]=i+1;
    }
    cout << " 函数D：";
    D(a,len);


    for(int i=0;i<len;i++)
    {
        a[i]=i+1;
    }
    cout << " 函数E：";
    E(a,len);


    for(int i=0;i<len;i++)
    {
        a[i]=i+1;
    }
    cout << " 函数F：";
    F(a,len);

    cout << endl << endl << endl;
    for(int i=0;i<len;i++)
    {
        a[i]=i+1;
    }
    cout << G(a,len) << endl;


    for(int i=0;i<len;i++)
    {
        a[i]=i+1;
    }
    cout << H(a,len) << endl;


    for(int i=0;i<len;i++)
    {
        a[i]=i+1;
    }
    cout << I(a,len) << endl;


    for(int i=0;i<len;i++)
    {
        a[i]=i+1;
    }
    cout << J(a,len) << endl;


    for(int i=0;i<len;i++)
    {
        a[i]=i+1;
    }
    cout << K(a,len) << endl;
    return 0;
}
