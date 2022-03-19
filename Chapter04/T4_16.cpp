/*
 * FileName: T4_16.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: Mar 15th, 2022
 * Function: Salary calculator
*/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double hours,Rate;
	cout << "Enter hours worked (-1 to end): ";
	cin >> hours;
	
	while( hours != EOF)
	{
		cout << "Enter hourly rate of the employee ($00.00): 10.00" << endl;
		if( hours > 40)
		{
			Rate = 40*10 + (hours-40) * 15;
		}
		else 
			Rate = hours * 10;
		cout << setprecision(2) << fixed;
		cout << "Salary is $" << Rate <<endl; 
		
		cout << "\nEnter hours worked (-1 to end): ";
		cin >> hours;
		//只有正数才可以输出第二行 
	}
	return 0;
 } 

