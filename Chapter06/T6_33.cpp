/*
 * FileName: T6_33.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: April 9th, 2022
 * Function: Flip a coin
*/
#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<cstdlib> //rand ����� 
#include<cmath> //floor���� 
using namespace std;
int main()
{
	unsigned int frequency1=0;
	unsigned int frequency2=0;
	
	for(unsigned int i=1;i<=100;i++)
	{
		unsigned int face = 1 + rand()%2;
		if(1==face)
		{
			cout << "Head ";
			frequency1 ++;
		}
		
		 
		else
		 {
			cout << "Tail ";
			frequency2 ++;
		}
		
	}
	cout << endl;
	cout <<"Head�������� " << frequency1 << endl;
	cout <<"Tail�������� " << frequency2 << endl;
	return 0;
}
