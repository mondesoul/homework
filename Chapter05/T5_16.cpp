/*
 * FileName: T5_16.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: Mar 25th, 2022
 * Function: Calculation of compound interest
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	int  amount;
	int  principal = 100000; //美分 
	double rate = .05;  //annual interest rate
	
	cout << "Year" << setw( 21 ) << "Amount on deposit" << endl;
	
	cout << fixed << setprecision(2) ;
	for( unsigned int year = 1;year <= 10; ++year )
	{
		amount = principal * pow ( 1.0 + rate,year);
		
		//pow  次幂计算 
		cout << setw (4) << year << setw(21) << amount/100 << "." << amount%100 << endl;
	}
	return 0;
}
