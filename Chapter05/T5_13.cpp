/*
 * FileName: T5_13.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: Mar 25th, 2022
 * Function: The bar chart
*/
#include <iostream>
using namespace std;
int main()
{
	int a;
	
	for (int i=1;i<=5;i++)
	{
		cin >> a;
		for (int j=1;j<=a;j++)
		{
			cout << "*";
			if (j==a)
			cout << endl;
		}
	}
}
