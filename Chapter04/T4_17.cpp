/*
 * FileName: T4_17.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: Mar 15th, 2022
 * Function: Maximum number
*/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int counter=1,number,largest;
	cin >> number;
	largest = number;
	
	while ( 1 )//为真，可以循环  
	{
		cin >> number;
		if( number >= largest)
		{
			largest = number;
		}
		
		counter++;
		if( 10 == counter)
		  break;
	}
	cout << largest << endl;
	return 0;
 } 
