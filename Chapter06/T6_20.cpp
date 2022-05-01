/*
 * FileName: T6_20.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: April 9th, 2022
 * Function: A multiple
*/
#include<iostream>
#include<iomanip>
#include<cstdlib> //rand Ëæ»úÊý 
#include<cmath> //floorº¯Êý 
using namespace std;
int multiple(int m,int n)
{
	if(n%m==0)
		return 1;
	else
		return 0;
}
int main()
{
	int m,n;
	
	while(1)
	{
		cin >> m >>n;
		if(m!=0&&n!=0)
			{
				if( 1==multiple(m,n) )
				  cout << "true" << endl;
				else
				 cout << "false" << endl;
			}
		else
		   break;
	}
	return 0;
}
