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

int main()
{
   const int CAPACITY = 1000;
   double values[CAPACITY];
   int current_size = 0;

   cout << "Please enter values, Q to quit:" << endl;
   double input;
   while (cin >> input)
   {
      if (current_size < CAPACITY)
      {
         values[current_size] = input;
         current_size++;
      }
   }

   double largest = values[0];
   for (int i = 1; i < current_size; i++)
   {
      if (values[i] > largest)
      {
         largest = values[i];
      }
   }

   for (int i = 0; i < current_size; i++)
   {
      cout << values[i];
      if (values[i] == largest)
      {
         cout << " <== largest value";
      }
      cout << endl;
   }


    double least = values[0];
   for (int i = 1; i < current_size; i++)
   {
      if (values[i] < least)
      {
         least = values[i];
      }
   }

   for (int i = 0; i < current_size; i++)
   {
      cout << values[i];
      if (values[i] == least)
      {
         cout << " <== least value";
      }
      cout << endl;
   }
   return 0;
}

