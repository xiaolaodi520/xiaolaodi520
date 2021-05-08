/*
 ******************************************************************
 *
 *  ����:     ��������Ҫ�����ڽ�������λ��ѹ˿�
 *
 *  �ļ���:   P6_13.cpp
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

vector<string> name_of_best_customer(vector<double> sales,vector<string> customers);

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
    vector<string> top_n = name_of_best_customer(sales,customers);
    cout << "��ѹ˿͵�����Ϊ:" << endl;
    for(int i = 0; i < top_n.size(); i++)
    {
        cout << top_n[i] << endl;
    }

    return 0;
}
vector<string> name_of_best_customer(vector<double> sales,vector<string> customers)
{
    int max = sales[0];
    int index = 0;
    string name;
    vector<string> top_n;
    for(int i = 1; i < sales.size(); i++)
    {
        if(sales[i] > max)
        {
            max = sales[i];
        }
    }
    for(int i = 0; i < sales.size(); i++)
    {
        if(sales[i] == max)
            top_n.push_back(customers[i]);
    }
    return top_n;
}
