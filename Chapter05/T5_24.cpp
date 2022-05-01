/*
 * FileName: T5_24.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: Mar 25th, 2022
 * Function: Diamond pattern plus
*/
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	
	int m = n / 2;
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=m+1-i;j++)
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
	if(n%2!=0)
	{
		for(int i=m+1;i>=1;i--)
		{
			for(int j=1;j<m+2-i;j++)
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
	}
	else
	{
		for(int i=m;i>=1;i--)
		{
			for(int j=1;j<m+2-i;j++)
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
		
	}
	return 0;
}
