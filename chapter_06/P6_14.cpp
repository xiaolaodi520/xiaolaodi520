/*
 ******************************************************************
 *
 *  ����:     ��������Ҫ�����ڶ�ʵ��õ�������ֵ����ƽ������
 *
 *  �ļ���:   P6_14.cpp
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

 using namespace std;

 void smooth(double values[],int size);

 int main()
 {
     double values[10] = {5.5,6.8,7.7,8.9,9.9,11,12.1,13.2,14.3,15.5};
     smooth(values,10);
     return 0;
 }
 void smooth(double values[],int size)
 {
     for(int i = 1; i < size-1; i++)
     {
         values[i] = (values[i-1] + values[i+1]) / 2;
     }
     cout << "ƽ��������ʵ������Ϊ : " << endl;
     for(int i = 0; i < size; i++)
     {
         cout << values[i] << " ";
     }

 }
