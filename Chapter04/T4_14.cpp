/*
 * FileName: T4_14.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: Mar 15th, 2022
 * Function: Credit line problem
 */
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int account; 
	double beginningBalance,totalCharges,totalCredits,creditLimit;
	cout << "Enter account number (or -1 to quit): ";
	cin >> account ;
	
	while (account != EOF)
	{
		cout << "Enter beginning balance: ";
		cin >> beginningBalance;
		cout << "Enter total charges: ";
		cin >> totalCharges;
		cout << "Enter total credits: ";
		cin >> totalCredits;
		cout << "Enter credit limit: ";
		cin >> creditLimit;
		
		double newBalance = beginningBalance + totalCharges - totalCredits;
		cout << "New balance is " << fixed << setprecision(2) << newBalance <<endl;
		if( newBalance > creditLimit )
		{

			cout << "Account:      " << account <<endl;//ע��Ҫ���� 
			cout << "Credit limit: " << fixed << setprecision (2) << creditLimit <<endl;
			cout << "Balance��     " << fixed << setprecision (2) << newBalance <<endl;
			cout << "Credit Limit Exceeded." <<endl;
		} 
		cout << "\nEnter account number (or -1 to quit): ";
		//���ǻ��� 
		cin >> account ;
		 
	}
	return 0;
}
