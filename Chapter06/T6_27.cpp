/*
 * FileName: T6_27.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: April 9th, 2022
 * Function: 
*/
#include<iostream>
#include<iomanip>
#include<cstdlib> //rand Ëæ»úÊý 
#include<cmath> //floorº¯Êý 
using namespace std;
double min (double a,double b,double c)
{
	double m= a<b ? a:b;
	 m= m<c ? m:c;
	return m;
}
int main()
{
	double a,b,c;
	cin >> a >> b >> c;
	cout << min(a,b,c);
	return 0;
}
