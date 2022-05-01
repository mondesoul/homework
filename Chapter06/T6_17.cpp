/*
 * FileName: T6_17.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: April 9th, 2022
 * Function: The random number plus
*/
#include<iostream>
#include<iomanip>
#include<cstdlib> //rand Ëæ»úÊý 
#include<cmath> //floorº¯Êý 
using namespace std;
int main()
{
	
	for ( int i = 1;i <=5;i++)
	{
		if(5==i)
		cout << (2 * (1 +rand()%5))<< endl;
		else
		cout << (2 * (1 +rand()%5))<< ",";
	}
	for ( int i = 1;i <=5;i++)
	{
		if(5==i)
		cout << (2 * (1 +rand()%5) +1)<< endl;
		else
		cout << (2 * (1 +rand()%5) +1)<< ",";
	}
	for ( int i = 1;i <=5;i++)
	{
		if(5==i)
		cout << (2 * (1 +rand()%5) +1) *2 << endl;
		else
		cout << (2 * (1 +rand()%5) +1) *2 << ",";
	}
	return 0;
}
