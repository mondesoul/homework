/*
 * FileName: T6_36.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: April 9th, 2022
 * Function: Recursive exponentiation 
*/
#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<cstdlib> //rand ����� 
#include<cmath> //floor���� 
using namespace std;
void power(int base ,int exponent)
{
	
	if(1==exponent)
	cout << base << endl;
	else
	{
		cout << base << "��"  ;
		return power(base,exponent-1);
		//return   �ݹ� 
	}
	 
	  
}
int main()
{
	
	int base ,exponent;
	cin >> base >> exponent;
	cout << "power" << "(" << base << "," << exponent << ") = "; 
	 
	 power(base,exponent);
	 //voidֱ�ӵ��� ����cout 
	
	return 0;
}

