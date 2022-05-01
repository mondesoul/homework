/*
 * FileName: T6_45.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: April 12th, 2022
 * Function: plus
*/
#include<iostream>
#include<iomanip>
#include<cstdlib> //rand 随机数 
#include<cmath> //floor函数 
using namespace std;
int mystery(int ,int );

int main()
{
	int x;
	int y;
	int t;
	cout << "Enter two integers: ";
	cin >> x >> y;
	if(x<=y)
	{
		t=x;x=y;y=t;
	}
	if(y>=0)
	cout << "The result is " << mystery (x,y) << endl;
	else
	cout << "The result is -" << mystery (x,y) << endl;
 } 
//求两个数字的乘积  b为负数时候无法正常运行 

int mystery(int a,int b)
{
	if(0==b)
	  return 0;
	if(b>0) 
	{
		if(1==b)
	     return a;
		else
	     return a + mystery(a,b-1);
	}
	else
	{
		b=-b;
		
		mystery(a,b);
	}
}
