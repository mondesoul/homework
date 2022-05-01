/*
 * FileName: T6_21.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: April 9th, 2022
 * Function: An even number
*/
#include<iostream>
#include<iomanip>
#include<cstdlib> //rand Ëæ»úÊý 
#include<cmath> //floorº¯Êý 
using namespace std;
int iseven(int m)
{
	if(0==m%2)
	 return 1;
	else
	 return 0;
}
int main()
{
	int m;
	while(1)
	{
		cin >> m;
		if(0==m)
		{
			break;
		 } 
		else
		{
			if(1==iseven(m))
			 cout <<"true" <<endl;
			else
			cout << "false" << endl;
		}
	}
	return 0;
}
