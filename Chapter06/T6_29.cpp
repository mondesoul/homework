/*
 * FileName: T6_29.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: April 9th, 2022
 * Function: Judgment of prime numbers
*/
#include<iostream>
#include<iomanip>
#include<cstdlib> //rand ����� 
#include<cmath> //floor���� 
using namespace std;
bool isPrime(int m)
{
	
	if (2==m)
	  return true;
	else
	{
		for(int i=2;i<=sqrt(m);i++)
		{
			if(0==m%i)
			 return false;
			  
		}
		return true;
	}
	//boll���Ϳ���ֱ���ж� 
}
int main()
{
	for(int i=2;i<=1000;i++)
	{
		if(isPrime(i))
		 cout << i <<" ";
	}
	cout << endl ;
	return 0;
 } 
