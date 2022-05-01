/*
 * FileName: T6_26.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: April 9th, 2022
 * Function: Celsius and Fahrenheit
*/
#include<iostream>
#include<iomanip>
#include<cstdlib> //rand ����� 
#include<cmath> //floor���� 
using namespace std;
double celsius(double fahrenheit)
{
	cout << fixed << setprecision(2) ;
	
	return 5*(fahrenheit-32)/9;
}
double fahrenheit(double celsius )
{
	cout << fixed << setprecision(2) ;
	
	return 9*celsius/5 + 32;
}
int main()
{
	cout << "�����¶�ת���ɻ����¶ȣ�" <<endl; 
	for(int i=0;i<=100;i++)
	{
		cout << i << "\t" << fahrenheit(i) << endl;
	}
	
	cout << "�����¶�ת���������¶ȣ�" << endl;
	for(int i=32;i<=212;i++)
	{
		cout << i << "\t" << celsius(i) << endl;
	}
	return 0;
}
