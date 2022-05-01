/*
 * FileName: T6_26.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: April 9th, 2022
 * Function: Celsius and Fahrenheit
*/
#include<iostream>
#include<iomanip>
#include<cstdlib> //rand 随机数 
#include<cmath> //floor函数 
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
	cout << "摄氏温度转换成华氏温度：" <<endl; 
	for(int i=0;i<=100;i++)
	{
		cout << i << "\t" << fahrenheit(i) << endl;
	}
	
	cout << "华氏温度转换成摄氏温度：" << endl;
	for(int i=32;i<=212;i++)
	{
		cout << i << "\t" << celsius(i) << endl;
	}
	return 0;
}
