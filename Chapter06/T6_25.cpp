/*
 * FileName: T6_25.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: April 9th, 2022
 * Function: Number of seconds to calculate
*/
#include<iostream>
#include<iomanip>
#include<cstdlib> //rand Ëæ»úÊý 
#include<cmath> //floorº¯Êý 
using namespace std;
int secTime(int hour,int minutes,int second)
{
	return second + minutes*60 + hour*60*60 ;
}
int main()
{
	int h1,m1,s1,h2,m2,s2;
	cin >> h1 >> m1 >> s1 >>h2 >> m2 >> s2;
	int m=secTime(h1,m1,s1);
	int n=secTime(h2,m2,s2);
	
	cout << abs(m-n) << endl;
	return 0;
}

