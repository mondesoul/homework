/*
 * FileName: T6_31.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: April 9th, 2022
 * Function: Greatest common divisor
*/
#include<iostream>
#include<iomanip>
#include<cstdlib> //rand 随机数 
#include<cmath> //floor函数 
using namespace std;
int gcd (int a,int b)
{
    int t;  
    if(a<b)  
    {  
        t=a;a=b;b=t;  
    }  
     return b ? gcd(b, a % b) : a;
	//一直到b为0结束，输出a 
}
int main()
{
	int a,b;
	cin >> a >>b;
	
	cout << gcd(a,b) <<endl;
	
	return 0;
	
}
