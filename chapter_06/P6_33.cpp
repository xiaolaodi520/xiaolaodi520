
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
    for(double i=0;i<160;i++)
    {
       int j= (sin((i*6.28)/320))*150;
       for(int k=0;k<300;k++)
       {

           if(k>(150-j)&&k<150)
           {
               pic.set(i,k,0,0,0);
           }


       }

    }
    for(double i=160;i<320;i++)
    {
       int j= (sin((i*6.28)/320))*150;
       for(int k=0;k<300;k++)
       {

           if(k<(150+abs(j))&&k>150)
           {
               pic.set(i,k,0,0,0);
           }


       }

    }
    pic.save("p33.png");
    return 0;
}
