
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
   for(int x=0;x<8;x++)
   {
       for(int y=0;y<8;y++ )
       {

            for(int i=40*x;i<40*(x+1);i++)
    {
        for(int j=40*y;j<40*(y+1);j++)
        {
            if(x%2==0&&y%2==0)
            {
                pic.set(i,j,0,0,0);
            }
            if(x%2==1&&y%2==0&&y%4==0)
            {
                pic.set(i,40*y+20,0,0,0);
               if(i-40*x==2*(j-40*y)||i-40*x==(80-2*(j-40*y)))
               {
                   pic.set(i,j,0,0,0);
               }


            }
             if(x%2==1&&y%2==0&&y%4!=0)
            {
                pic.set(i,40*y+20,0,0,0);
               if(i-40*x==40-2*(j-40*y)||i-40*x==(2*(j-40*y)-40))
               {
                   pic.set(i,j,0,0,0);
               }


            }


        }

    }
       }
   }


   pic.save("p30.png");
    return 0;
}





