/*
 * FileName: T7_14.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: April 28th, 2022
*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	cout << "������20��������10--100���� " << endl;
	vector<int>arr(20);
	int n, f,k=0;
	for (int i = 0; i < 20; i++)
	{
		cin >> n;
		for (int j = 0; j < 20; j++)
		{
			f = 0;
			if (n == arr[j])
			{
				f = 1;
				break;
			}
		}
		if (0 == f)
		{
			arr[k++] = n;
		}
	}
	for (int i = k - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	return 0;
}
