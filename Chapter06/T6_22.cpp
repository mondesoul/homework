/*
 * FileName: T6_22.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: April 9th, 2022
 * Function: Square design
*/
#include<iostream>
#include<iomanip>
#include<cstdlib> //rand ����� 
#include<cmath> //floor���� 
using namespace std;
int squareDesign(int m)
{
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(j==m)
			  cout << "*" << endl;
			else
			 cout << "*";
		}
	}
	return 0;//�����ϻ���� side+1  �� 
}
int main()
{
	int side ;
	cin >> side ;
	cout << squareDesign (side);
	return 0;
 } 

