/*
 * FileName: T7_10.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: April 28th, 2022
*/

#include<iostream>
using namespace std;
int main()
{
	double sales=0,salary=200;
	int array[9] = { 0 };
	cout << "����������������Ա�������۶����-1�������� " << endl;
	while (1)
	{
		cin >> sales;
		if (-1 == sales)
		{
			break;
		}
		salary = 200;
		salary += (0.09 * sales);
		if (salary <= 299)
		{
			array[0]++;
		}
		else if (salary <= 399)
		{
			array[1]++;
		}
		else if (salary <= 499)
		{
			array[2]++;
		}
		else if (salary <= 599)
		{
			array[3]++;
		}
		else if (salary <= 699)
		{
			array[4]++;
		}
		else if (salary <= 799)
		{
			array[5]++;
		}
		else if (salary <= 899)
		{
			array[6]++;
		}
		else if (salary <= 999)
		{
			array[7]++;
		}
		else
		{
			array[8]++;
		}
	}
	cout << "200--299$: " << array[0] << "��" << endl;
	cout << "300--399$: " << array[1] << "��" << endl;
	cout << "400--499$: " << array[2] << "��" << endl;
	cout << "500--599$: " << array[3] << "��" << endl;
	cout << "600--699$: " << array[4] << "��" << endl;
	cout << "700--799$: " << array[5] << "��" << endl;
	cout << "800--899$: " << array[6] << "��" << endl;
	cout << "900--999$: " << array[7] << "��" << endl;
	cout << "1000$������: " << array[8] << "��" << endl;
	return 0;
}
