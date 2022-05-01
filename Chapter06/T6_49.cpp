/*
 * FileName: T6_49.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: April 12th, 2022
 * Function: Calculation of the area of a circle
*/
#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib> //rand 随机数 
#include<cmath> //floor函数 
#define PI 3.1415926
using namespace std;
double circleArea(double m)
{
	return PI*m*m;
	
}
int main()
{
	double m;
	cout << "圆的半径： " ;
	cin >> m;
  //	cout << fixed << setprecision(2);
	cout << circleArea(m);
	return 0;
	
}
