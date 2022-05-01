/*
 * FileName: T6_37.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: April 9th, 2022
 * Function: Fibonacci numbers
*/
//쳲���������:1��1��2��3��5��8��13......
#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<cstdlib> //rand ����� 
#include<cmath> //floor���� 
using namespace std;
int fibonacci(int m)   // int���ؾ������ֵ 
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
    //������ ���������� 
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
//�ݹ��� 
 int main()
{
	int m;
	cin >> m;
	cout << fibonacci(m);
	//int ����Ҫ��� 
	return 0;
}
