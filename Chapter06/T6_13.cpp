/*
 * FileName: T6_13.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: April 9th, 2022
 * Function: The integer rounding of the number
*/
#include<iostream>
#include<iomanip>
#include<cmath> //floor���� 
using namespace std;
int main()
{
	double x;
	cout << "ԭʼ��ֵ\t" << "��������ֵ\t" << endl; 
	while(1)
	{
		cin >> x ;
		double y = floor (x+0.5);
		cout << x << "\t" << y << endl; 
	}
	return 0;
 } 
