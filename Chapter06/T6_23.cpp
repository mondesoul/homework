/*
 * FileName: T6_23.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: April 9th, 2022
 * Function: A square pattern of arbitrary symbols
*/
#include<iostream>
#include<iomanip>
#include<cstdlib> //rand ����� 
#include<cmath> //floor���� 
using namespace std;
int squareDesign(int m,char fillCharacter)
{
	//�����ڲ������� 
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(j==m)
			  cout << fillCharacter << endl;
			else
			 cout << fillCharacter;
		}
	}
	return 0;//�����ϻ���� side+1  �� 
}
int main()
{
	int side ;
	char fillCharacter;
	cin >> side  >> fillCharacter;
	cout << squareDesign (side,fillCharacter);
	return 0;
 } 

