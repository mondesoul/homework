/*
 * FileName: T5_10.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: Mar 25th, 2022
 * Function: Factorial 
*/
#include <iostream>
using namespace std;
int main()
{
	long long int sum = 1;
	
	for(int i=1;i<=5;i++){
	
		sum *= i;
		cout << i << "µÄ½×³Ë:\t" << sum  << endl; 
	} 
	
	long long int su = 1;
	for (int i=1;i<=20;i++){
		su *= i;
		if(i == 20){
			cout << "20µÄ½×³Ë:\t" << su <<endl;
		}
	}
	
	return 0;
}
