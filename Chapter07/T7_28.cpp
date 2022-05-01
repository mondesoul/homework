/*
 * FileName: T7_28.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: April 30th, 2022
*/

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

bool testPalindrome(string A)
{
	string B = A;
	reverse(A.begin(), A.end());
	if (B == A)return true;
	return false;
}

int main()
{
	string a;
	cin >> a;
	if (testPalindrome(a))cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}
