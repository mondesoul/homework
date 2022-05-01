/*
 * FileName: T5_29.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: Mar 25th, 2022
 * Function: question
*/
#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
	double money = 24;
	for (int i=5;i<11;i++)
	{
		for (int j=1;j<=387;j++)
		
			money = money * (1+0.01*i);
			cout << fixed << setprecision(2) <<money << endl;
	}
	return 0;
}
