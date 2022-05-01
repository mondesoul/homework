/*
 * FileName: T7_32.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: April 30th, 2022
*/

#include<iostream>
using namespace std;

int recursiveMinimum(int arr[], int i, int j)
{
	if (arr[i] < arr[i + 1])arr[i + 1] = arr[i];
	if (i + 1 == j)return arr[i + 1];
	return recursiveMinimum(arr, i + 1, j);
}

int main()
{
	int arr[8] = { 3,55,45,-9,90,34,56,-45 };
	cout << "Minimum: " << recursiveMinimum(arr, 0, 7);
	return 0;
}
