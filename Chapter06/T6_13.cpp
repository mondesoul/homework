/*
 * FileName: T6_13.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: April 9th, 2022
 * Function: The integer rounding of the number
*/
#include<iostream>
#include<iomanip>
#include<cmath> //floor函数 
using namespace std;
int main()
{
	double x;
	cout << "原始数值\t" << "舍入后的数值\t" << endl; 
	while(1)
	{
		cin >> x ;
		double y = floor (x+0.5);
		cout << x << "\t" << y << endl; 
	}
	return 0;
 } 
