/*
 * FileName: T5_5.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: Mar 15th, 2022
 * Function: Integer summation
*/
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	
	int number,sum=0;
	for(int i=1; i<=n;i++){
		cin >> number ;
		sum += number;
	}
	cout << sum <<endl;
	return 0;
 } 
