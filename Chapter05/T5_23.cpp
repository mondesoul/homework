/*
 * FileName: T5_23.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: Mar 25th, 2022
 * Function: Diamond pattern
*/
#include <iostream>
using namespace std;
int main()
{
	for(int i=1;i<=4;i++)
	{
		for(int j=1;j<=5-i;j++)
		{
			cout <<" ";
		}
		for (int m=1;m<=2*i-1;m++)
		{
			cout << "*" ;
			if (m==2*i-1)
			cout << endl;
		}
	}
	for(int i=5;i>=1;i--)
	{
		for(int j=1;j<6-i;j++)
		{
			cout <<" ";
		}
		for (int m=1;m<=2*i-1;m++)
		{
			cout << "*" ;
			if (m==2*i-1)
			cout << endl;
		}
	}
	return 0;
}
