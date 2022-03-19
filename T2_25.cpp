/*
 * FileName: T2_25.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: Mar 11th, 2022
 * Function: multiple
 */

#include <iostream>

using namespace std;

int main()
{
	int a,b;
	cin >> a >> b;

	if ( a % b == 0 )
	  cout << "第一个数是第二个数的倍数" << endl;

	if ( a % b != 0 )
	  cout << "第一个数不是第二个数的倍数" << endl;

	return 0;
 }


