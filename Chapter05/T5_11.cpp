/*
 * FileName: T5_11.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: Mar 25th, 2022
 * Function: Compound interest 
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double amount ;
	double principal = 1000.0;
	
	for ( int i=0;i<=5;i++){
	
		double rate = (5 +i) *0.01 ;
		cout << "此时的利率：" << rate <<endl; 
		cout <<  "Year" << setw( 21 ) <<"Amount on deposit" <<endl;
		cout << fixed << setprecision (2) ;
	
		for ( unsigned int year = 1;year <= 10;++year)
		{
			amount = principal * pow (1.0 +rate,year);
			cout << setw( 4 ) << year << setw (21 ) <<amount <<endl;
		}
	}
 } 
