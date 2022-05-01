/*
 * FileName: T6_19.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: April 9th, 2022
 * Function: Calculation of the hypotenuse of a right triangle
*/
#include<iostream>
#include<iomanip>
#include<cstdlib> //rand ����� 
#include<cmath> //floor���� 
using namespace std;
double hypotenuse(double side1,double side2)
{
	cout << fixed << setprecision(2);
	return sqrt(side1*side1+side2*side2);
}
int main()
{
	double a,b;
	int i=1;
	cout << "������\t" << "��1\t" << "��2\t" << endl;
	while(1)
	{
		if(0==a&&0==b)
			break;
		else
		{
		
			cout << i++ << "\t";
			cin >> a  >> b;
			cout <<  "б�߱߳��� \t"  ;
			cout << hypotenuse(a,b) << endl;
		}
		
		
	}
	return 0;
 } 
