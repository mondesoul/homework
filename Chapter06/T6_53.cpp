/*
 * FileName: T6_53.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: April 12th, 2022
 * Function: The maximum value
*/
#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib> //rand 随机数 
#include<cmath> //floor函数 
#define PI 3.1415926
using namespace std;
void maximum(char a,char b)
{
	
	if(a < b){
 
		cout << b;
	
	}else{
	
		cout << a;
	}

}
int  maximum(int a,int b)
{
	
	if(a < b){
 
		cout << b;
	
	}else{
	
		cout << a;
	}

}
double  maximum(double a,double b)
{
	
	if(a < b){
 
		cout << b;
	
	}else{
	
		cout << a;
	}

}
int main()
{
	cout << "比较数值的类型（1 to 浮点，2 to 字符,3 to 整型）：";
	int  t;
	cin >> t;
	if(1==t)
	{
		double m,n;
		cin >> m >>n;
		maximum(m,n);
	 } 
	 else if(2==t)
	 {
	 	char x,y;
		cin >> x >> y;
		maximum(x,y);
	 }
	else
	{
		int q,w;
		cin >> q >> w;
		maximum(q,w);
	}
	
	return 0;
}
