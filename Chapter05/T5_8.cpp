/*
 * FileName: T5_8.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: Mar 15th, 2022
 * Function: Find the smallest integer
*/
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	
	int number;
	cin >> number;
	int min = number;
	int t;
	for (int i=1;i<n;i++){
		cin >> number;
		if( number <= min ){
			t=min;min=number;number=t;
		}
		 
	}
	cout << min <<endl;
	return 0;
}
