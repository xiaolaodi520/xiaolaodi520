
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
#include<vector>
#include<cmath>
#include"picture.cpp"
#include"lodepng.cpp"
using namespace std;

int main()
{
    Picture pic("queen-mary.png");
    Picture pic1("a.png");
    int width1=pic.width();
    int height1=pic.height();
    int width2=pic1.width();
    int height2=pic1.height();
    int height=min(height1,height2);
    int width=min(width1,width2);
    int height3=max(height1,height2);
    int width3=max(width1,width2);
  for(int x=0;x<width;x++)
   {
       for(int y=0;y<height;y++ )
       {
           int pred=pic.red(x,y);
           int pgreen=pic.green(x,y);
           int pblue=pic.blue(x,y);
           int pred1=pic1.red(x,y);
           int pgreen1=pic1.green(x,y);
           int pblue1=pic1.blue(x,y);
           pic.set(x,y,(pred+pred1)/2,(pgreen1+pgreen)/2,(pblue+pblue1)/2);
       }

   }
   for(int x=width;x<width3;x++)
   {
       for(int y=0;y<height;y++ )
       {

           pic.set(x,y,pic.red(x,y)/2,pic.green(x,y)/2,pic.blue(x,y)/2);
       }

   }
   for(int x=0;x<width3;x++)
   {
       for(int y=height;y<height3;y++ )
       {

           pic.set(x,y,pic.red(x,y)/2,pic.green(x,y)/2,pic.blue(x,y)/2);
       }

   }
   pic.save("P6_27.png");
    return 0;
}






