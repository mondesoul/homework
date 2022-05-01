/*
 * FileName: T6_41.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: April 12th, 2022
 * Function: Greatest common divisor
*/
#include<iostream>
#include<iomanip>
#include<cstdlib> //rand Ëæ»úÊý 
#include<cmath> //floorº¯Êý 
using namespace std;
int gcd (int a,int b)
{
    int t; 
    if(a<b)  
	{
	 	t=a;a=b;b=t;  
	}
	
    else
    {  
		 if(0==b)
		{
			return a;
		 } 
       else
       
       return gcd(b,a%b);
    }  

}
int main()
{
	int a,b;
	cin >> a >>b;
	
	cout << gcd(a,b) <<endl;
	
	return 0;
	
}
