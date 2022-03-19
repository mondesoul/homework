/*
 * FileName: T4_25.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: Mar 15th, 2022
 * Function: Asterisk square
*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "空心正方形的边长：" ;
	cin >> n;
	
	for ( int i = 1; i <= n; i++)
	{
		
		if ( i == n )
		cout << "*" <<endl;
		else
		cout << "*";//注意结尾的换行 
	 } 
	for ( int j = 1; j <= n-2; j++)
	{
		for ( int i = 1; i <= n;i++ )
		{
		if ( i == 1  )
		cout << "*" ;
		else if ( i == n )
		cout << "*" << endl;
		else 
		cout << " " ;
		}     //多行多个元素 
	}
	for ( int i = 1; i <= n; i++)
	{
		
		if ( i == n )
		cout << "*" <<endl;
		else
		cout << "*";
	 } 
	//第一行第二行相似 
}
