
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
        for(int x=0;x<pic.width();x++)
        {
            for(int y=0;y<pic.height();y++)
            {
                if((y-x)%7==0)
                {
                    pic.set(x,y,0,0,0);
                }
            }
        }
        pic.save("P6_28.png");
    return 0;
}
