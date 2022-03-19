/*
 * FileName: T2_23.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: Mar 9th, 2022
 * Function: Maxinum and Mininum
 */

#include <iostream>

using namespace std;

int main()
{
	int a,b,c,d,e;
	int t;

	cin  >> a >> b >> c >> d >> e;

	if ( a < b )
    {
    	t=a;a=b;b=t;
	}
	if ( b < c )
	{
		t=b;b=c;c=t;
	}
	if ( c < d )
	{
		t=c;c=d;d=t;
	}
	if ( d < e )
	{
		t=d;d=e;e=t;
	 }
	if ( a < e )
	{
		t=a;a=e;e=t;
	}
	if ( a < c )
	{
		t=a;a=c;c=t;
	}
	if ( a < d )
	{
		t=a;a=d;d=t;
	}
	if ( b < d )
	{
		t=b;b=d;d=t;
	}
	if ( b < e )
	{
		t=b;b=e;e=t;
	}
	if ( c < e )
	{
		t=c;c=e;e=t;
	}
	cout << "最大值：" << a << endl;;
	cout << "最小值：" << e << endl;

	return 0;
}
