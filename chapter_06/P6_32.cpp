
/*
 ******************************************************************
 *
 *  ����:     ��������Ҫ�����ڴ�ӡ��ˮ��ͼ
 *
 *  �ļ���:   P6_15.cpp
 *
 *  ���� :    Aohan Zhang
 *
 *  ��λ :    ���ϴ�ѧ���������Ϣ����ѧԺ
 *
 *  E-mail:   2208143652@qq.com
 *
 *  ʱ�� :    2021��5��2��
 *
 *  �汾 :    1.0
 *
 ******************************************************************
 */
#include<iostream>
#include"Picture.h"
#include<vector>
#include"lodepng.h"
#include<cmath>
#include"picture.cpp"
#include"lodepng.cpp"
using namespace std;

int main()
{
    Picture pic("1.png");
    double a=9.8;
    double v0=5;
  for(int time=0;time<4;time++)
  {

       if(time%2==0)
       {
           for(int i=80*time;i<80*(time+1);i++)
   {
       for(int j=0;j<300;j++)
       {
           double t=(i-80*time)/v0;

           if((int)((a/2)*pow(t,2))==j)
           {

               pic.set(i,j,0,0,0);
           }
       }

   }
       }
        if(time%2!=0)
       {
           for(int i=80*time;i<80*(time+1);i++)
   {
       for(int j=0;j<300;j++)
       {
           double t=(i-80*time)/v0;

           if((int)((a/2)*pow(t,2))==j)
           {

               pic.set(80*(time+1)-i,j,0,0,0);
           }
       }

   }
       }


   v0/=2;
   if(v0<=0)
   {
       break;
   }
  }




    pic.save("p32.png");
    return 0;
}
