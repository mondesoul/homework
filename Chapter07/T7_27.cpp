/*
 * FileName: T7_27.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: April 30th, 2022
*/

#include<iostream>
using namespace std;

void test(int arr[],int i)
{
	if (arr[i])
	{
		for (int j = 2*i; j < 1000; j += i)
		{
			arr[j] = 0;
		}
	}
}

int main()
{
	int arr[1000];
	for (int i = 0; i < 1000; ++i)
	{
		arr[i] = 1;
	}
	for (int i = 2; i < 1000; i++)
	{
		if (arr[i])test(arr, i);
	}
	cout << "2--999ÖÊÊýÓÐ:" << endl;
	for (int i = 2; i < 1000; i++)
	{
		if (arr[i])cout <<i<< "\n";
	}
	return 0;
}
