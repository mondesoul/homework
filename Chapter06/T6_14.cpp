/*
 * FileName: T6_14.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: April 9th, 2022
 * Function: Rounding of a specific decimal number
*/
#include<iostream>
#include<iomanip>
#include<cmath> //floor���� 
using namespace std;
double roundToInteger(double number)
{
 //���� 
	return floor ( number + 0.5);
}
double roundToTenths(double number)
{
	
	return floor ( number*10 + 0.5)/10;  
	
	
}
double roundToHundredths(double number)
{
	
	return floor ( number*100 + 0.5)/100;  
	
}
double roundToThousandths(double number)
{
	return floor ( number*1000 + 0.5)/1000;  

}
int main()
{
	double a;
	
	cout << "ԭʼ��ֵ\t" << "��������\t" << "����ʮ��λ\t" << "����ٷ�λ\t" << "����ǧ��λ\t" <<endl;
	
	while(1)
	{
		cin >> a;
		cout << a  << "\t\t"<< roundToInteger(a)<< "\t\t" << roundToTenths(a) << "\t\t"<< roundToHundredths(a) << "\t\t"<< roundToThousandths(a) << "\t\t"<<endl;
	}
	return 0;
 } 
