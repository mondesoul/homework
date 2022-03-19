/*
 * FileName: T2_18.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: Mar 9th, 2022
 * Function: Compare the size of numbers
 */

#include <iostream>

using namespace std;

int main()
{
    int number1;
	int number2;

	cin >> number1 >> number2;

	if ( number1 == number2 )
	  cout << "These numbers are equal" << endl;

	if ( number1 > number2 )
	  cout << number1 << " is large." << endl;

	if ( number1 < number2 )
	  cout << number2 << " is large." << endl;

    return 0;
}
