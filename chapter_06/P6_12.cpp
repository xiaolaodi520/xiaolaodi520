/*
 ******************************************************************
 *
 *  ����:     ��������Ҫ�����ڽ�����ѹ˿�
 *
 *  �ļ���:   P6_12.cpp
 *
 *  ���� :    Aohan Zhang
 *
 *  ��λ :    ���ϴ�ѧ���������Ϣ����ѧԺ
 *
 *  E-mail:   2208143652@qq.com
 *
 *  ʱ�� :    2021��5��4��
 *
 *  �汾 :    1.0
 *
 ******************************************************************
 */
#include<iostream>
#include<string>
#include<vector>

using namespace std;

string name_of_best_customer(vector<double> sales,vector<string> customers);

int main()
{
    cout << "���������м۸������:" << endl;
    vector<double> sales;
    vector<string> customers;
    int price;
    string name;
    while(1)
    {
        cin >> price;
        if(price == 0)
        {
            break;
        }
        sales.push_back(price);
        cin >> name;
        customers.push_back(name);
    }
    cout << "��ѹ˿͵�����Ϊ:" << name_of_best_customer(sales,customers) << endl;;
    return 0;
}
string name_of_best_customer(vector<double> sales,vector<string> customers)
{
    int max = sales[0];
    int index = 0;
    for(int i = 1; i < sales.size(); i++)
    {
        if(sales[i] > max)
        {
            max = sales[i];
            index = i;
        }
    }
    return customers[index];
}

