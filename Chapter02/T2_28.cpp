/*
 * FileName: T2_28.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: Mar 11th, 2022
 * Function: number
 */
#include <iostream>

using namespace std;

int main( )
{
	int a;
	cin >> a;

	cout << a / 10000 << " ";
	cout << a /1000%10 << " ";
	cout << a /100%10 << " ";
	cout << a /10%10 << " ";
	cout << a%10 << endl;
	return 0;
}
