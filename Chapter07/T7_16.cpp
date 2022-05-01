/*
 * FileName: T7_16.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: April 30th, 2022
*/
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
unsigned int rollDice()
{
	unsigned int die1 = 1 + rand() % 6;
	unsigned int die2 = 1 + rand() % 6;
	return die1 + die2;
}
int main()
{
	srand(static_cast<unsigned int>(time(0)));
	int arr[11] = { 0 };
	 unsigned int x;
	for (int i = 0; i <= 36000; ++i)
	{
		x = rollDice();
		switch (x)
		{
		case 2:
			arr[0]++;
			break;
		case 3:
			arr[1]++;
			break;
		case 4:
			arr[2]++;
			break;
		case 5:
			arr[3]++;
			break;
		case 6:
			arr[4]++;
			break;
		case 7:
			arr[5]++;
			break;
		case 8:
			arr[6]++;
			break;
		case 9:
			arr[7]++;
			break;
		case 10:
			arr[8]++;
			break;
		case 11:
			arr[9]++;
			break;
		default:
			arr[10]++;
		}
	}
	for (int i = 2, j = 0; j < 11; j++, i++)
	{
		cout << i << ":\t" << arr[j] << "��" << endl;
	}
	return 0;
}
