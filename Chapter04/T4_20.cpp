/*
 * FileName: T4_20.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: Mar 15th, 2022
 * Function: Determine the validity of user input
*/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	unsigned int passes = 0;
	unsigned int failures = 0;
	unsigned int studentCounter = 1;
	
	while( studentCounter <= 10 )
	{
		cout <<"Enter result (1 = pass, 2 = fail): ";
		int result = 0;
		cin >> result;
		
		if( 1 == result)
		{
		  passes ++;
		  studentCounter += 1;//判断主体内，防止超出10 
		}
		if( 2 == result)
		{
		  failures ++;
		  studentCounter += 1;
		}
		if( result != 1&&result != 2)
		{
			//不做任何处理 
		}
		
	}
	cout << "Passed " << passes << "\nFailed " << failures << endl; 
	if( passes > 8 )
	  cout << "Bonus to instructor!" << endl;

	return 0;
}
