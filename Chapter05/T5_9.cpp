/*
 * FileName: T5_9.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: Mar 15th, 2022
 * Function: Product of odd integers 
*/
#include<iostream>
using namespace std;
int main()
{
	int product = 1;
	for (int i=1;i<=15;i++){
		
		if( i % 2 != 0)
		product *= i;
		
	}
	
	cout << product <<endl;
	
	return 0;
}
