/*
 * FileName: T6_18.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: April 9th, 2022
 * Function: Exponentiation computation
*/
#include<iostream>
#include<iomanip>
#include<cstdlib> //rand Ëæ»úÊý 
#include<cmath> //floorº¯Êý 
using namespace std;
long long int powerFunction(int  base,int exponent)
{
	
	for (int i=1;i<exponent;i++)
	{
	
			cout << base << "¡Á";
	}
	return base;
}
int main()
{
	int base,exponent;
	cin >> base >> exponent ;
	cout << "integerPower("  << base <<"," << exponent << ") = ";
	cout << powerFunction(base,exponent) << endl;
	
	return 0;
}
