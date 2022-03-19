/*
 * FileName: T4_15.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: Mar 15th, 2022
 * Function: Sales commission calculator
 */
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double sales,salary = 0;
	cout << "Enter sales in dollars (-1 to endl): ";
	cin >> sales;
	
	while ( sales != EOF)
	{
		cout << setprecision(2) << fixed;
		salary = 200 + sales*0.09;
		cout << "Salary is: $" << salary << endl;
		//忘记了尾部的endl 
		
		cout << "\nEnter sales in dollars (-1 to endl): ";
		cin >> sales;
		
	 } 
	return 0;
}
