/*
 * FileName: T2_19.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: Mar 9th, 2022
 * Function: Arithmetic operation
 */

#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
	int t;

	cout << "Input three different integers:";
	cin >> a >> b >> c;

	cout << "Sum is " << a+b+c <<endl;
	cout << "Average is " << ( a+b+c ) /3 << endl;
	cout << "Product is " << a * b * c << endl;

	if ( a < b )
	{
		t=a;a=b;b=t;
	}
	if ( b < c )
	{
		t=b;b=c;c=t;
	}
	if ( a < c )
	{
		t=a;a=c;c=t;
	}

	cout << "Smallest is " << c << endl;
	cout << "Largest is " << a << endl;

    return 0;
}
