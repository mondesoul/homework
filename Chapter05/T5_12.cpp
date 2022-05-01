/*
 * FileName: T5_12.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: Mar 25th, 2022
 * Function: Scale design
*/
#include <iostream>
using namespace std;
int main ()
{
	for (int i=1;i<=10;i++){
		for(int j=1;j<=i;j++){
			cout << "*";
			if(j==i)
			cout << endl;
		}
	}
	cout << endl;
	
	for (int i=1;i<=10;i++){
		for (int j=10;j>=i;j--){
			cout << "*" ;
			if( j == i)
			cout << endl;
		}
	}
	cout << endl;
	
	for ( int i=1;i<=10;i++)
	{
		for (int m=1;m<i;m++)
			cout << " ";
		for (int j=10;j>=i;j--){
			
			cout << "*" ;
			if( j == i)
			cout << endl;
		}
		}
	
	cout << endl;
	
	for (int i=1;i<=10;i++){
		
		for (int m=10;m>i;m--)
		cout << " ";
		for(int j=1;j<=i;j++){
			cout << "*";
			if(j==i)
			cout << endl;
		}
	}
	
	
		  
	 
	return 0;
 } 
