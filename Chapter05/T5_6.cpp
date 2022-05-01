/*
 * FileName: T5_6.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: Mar 15th, 2022
 * Function: Integer sum mean
*/
#include <iostream>
using namespace std;
int main()
{
	int n,sum=0,mean;
	for (int i=1;i;i++){
		cin >> n;
		if( n == 9999 ){
			break;
		}
		sum += n;
		mean = sum / i;
	}
	
	cout << mean <<endl;
	return 0;
}
