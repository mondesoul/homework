/*
 * FileName: T4_13.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: Mar 15th, 2022
 * Function: The car mileage
 */

#include <iostream>
#include <iomanip> 
using namespace std;
int main() 
{
	double mile, gallons, totalMile = 0, totalGallons = 0;
	cout << "Enter miles driven (-1 to quit): ";
	cin >> mile;
	//��mile������������ʱ�򣬽���whileѭ�� 
	
	while(mile != EOF)
    {
		cout << "Enter gallons used: ";
		cin >> gallons;
		
		cout << setprecision(6) << fixed; //����С��λ��Ϊ6λ
		//���������ݷ�,����#include<iomanip> 
		//cout << "MPG this trip: " << static_cast<double>(mile) / gallons << endl;
		//����int��ȡ��double��� 
		cout << "MPG this trip: " << mile / gallons << endl;
		totalMile += mile;
		totalGallons += gallons;
		cout << "Total MPG: " << totalMile / totalGallons << endl;
	
		cout << "\nEnter miles driven (-1 to quit): ";
		cin >> mile;
	}
	return 0;
}

