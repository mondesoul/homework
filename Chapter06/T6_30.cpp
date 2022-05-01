/*
 * FileName: T6_30.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: April 9th, 2022
 * Function: Digital reverse
*/
#include<iostream>
#include<iomanip>
#include<cstdlib> //rand Ëæ»úÊý 
#include<cmath> //floorº¯Êý 
using namespace std;
int reverse(int m)
{
	int sum=0;
	while(m)   //478
	{
		sum  += m%10; //  8    87  874
		
		m /= 10;     // 47     4    0
		if(m!=0)
		 sum *= 10;   //  80   870   
	}
	return sum;
 } 
int main ()
{
	int m;
	cin >> m;
	cout <<  reverse(m) <<endl;
	return 0;
}
