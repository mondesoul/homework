/*
 * FileName: T4_34.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: Mar 15th, 2022
 * Function: Factorial
 */
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int t=1;
	for ( int i=1;i<=n;i++)
	{
		t *= i;
	}
	cout << t << endl;;
	
	int a;
	cout << "您所需要的e的精度为：" ;
	cin >> a;
	double e = 1,m = 1;
	for (int i=1;i<a;i++)
	{
		m *= i;
		e = e + 1.0 / m;
		
	}
	cout << e <<endl;
	
	int x,b;
	cin >> x;
	cout << "您所需要的e的精度为：" ;
	cin >> b;
	double  e1 = 1, m1 = 1;
	for (int i=1;i<b;i++)
	{
		m1 *= i;
		e1 = e1 + pow (x,i) / m1;
		
	}
	cout << e <<endl;
	return 0;
 } 
