/*
 * FileName: T6_37.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: April 9th, 2022
 * Function: Fibonacci numbers
*/
//斐波那契数列:1、1、2、3、5、8、13......
#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<cstdlib> //rand 随机数 
#include<cmath> //floor函数 
using namespace std;
int fibonacci(int m)   // int返回具体的数值 
{
	if(0==m)
	 return 0;
	 
	if (1==m||2==m)
	 return 1;
	 
	int first = 1,second =1,third = 0;
	for(int i = 3; i<= m ;i++) 
	{
		third = first + second;
		first = second;
		second = third;
	}
	return third;
    //迭代求法 ，计算量大 
 } 
int Fibonacci(int i) 
{
		if(0 == i) 
		{
			return 0;
		}
		if(i == 1 || i == 2) 
		{
			return 1;
		}
		return Fibonacci(i -2) + Fibonacci(i-1);
}
//递归求法 
 int main()
{
	int m;
	cin >> m;
	cout << fibonacci(m);
	//int 函数要输出 
	return 0;
}
