/*
 * FileName: T6_32.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: April 9th, 2022
 * Function: Grade point of achievement
*/
#include<iostream>
#include<iomanip>
#include<cstdlib> //rand Ëæ»úÊý 
#include<cmath> //floorº¯Êý 
using namespace std;
int qualityPoints(int m)
{
	if(m<=100&&m>=90)
	return 4;
	else if(m<=89&&m>=80)
	return 3;
	else if(m<=79&&m>=70)
	return 2;
	else if(m<=69&&m>=60)
	return 1;
	else
	return 0;
}
int main()
{
	int m;
	cin >> m;
	cout <<  qualityPoints(m);
}
