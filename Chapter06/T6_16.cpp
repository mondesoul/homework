/*
 * FileName: T6_16.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: April 9th, 2022
 * Function: The random number
*/
#include<iostream>
#include<iomanip>
#include<cstdlib> //rand
#include<cmath> //floor函数 
using namespace std;
int main()
{
	double a,b,c,d,e,f;
	a = 1 + rand()%2;
	/*for (int i=1;i<=5;i++)
	cout << a << endl;
	*/   //这样无法 生成随机数字，只是一堆2 
	//把a换成  1 + rand()%2
	b = 1 + rand()%100;
	
	c = 0 + rand()%10;
	
	d = 1000 + rand()%113;
	e = -1 + rand()%3;
	f = -3 + rand()%15;
	return 0;
 } 
