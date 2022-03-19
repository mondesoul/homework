/*
 * FileName: T4_23.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: Mar 15th, 2022
 * Function: Else's swing problem
*/
#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cin >> x >> y;
	
	if ( x < 10 )//在x小于 10的情况下，if else才起效果 
	if ( y > 10 )
	cout << "*****" << endl;
	else
	cout << "#####" << endl;
	
	cout << "$$$$$" << endl;
	/*9 11
	  *****
	  $$$$$
	  
	  *****
	*/
	/*
	11 9
	$$$$$
	
	#####
	$$$$$
	*/
	
	cout << endl;
	
	if ( x < 10 )
	{
		if ( y > 10 )
		cout << "*****" << endl;
	}
	else
	{
		cout << "#####" << endl;
		cout << "$$$$$" << endl;
	}
}
