/*
 * FileName: T6_52.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: April 12th, 2022
 * Function: The minimum value
*/
#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib> //rand ����� 
#include<cmath> //floor���� 
#define PI 3.1415926
using namespace std;
void minimum(char a,char b)
{
	
	if(a > b){
 
		cout << b;
	
	}else{
	
		cout << a;
	}

}
int  minimum(int a,int b)
{
	
	if(a > b){
 
		cout << b;
	
	}else{
	
		cout << a;
	}

}
double  minimum(double a,double b)
{
	
	if(a > b){
 
		cout << b;
	
	}else{
	
		cout << a;
	}

}
int main()
{
	cout << "�Ƚ���ֵ�����ͣ�1 to ���㣬2 to �ַ�,3 to���ͣ���";
	int  t;
	cin >> t;
	if(1==t)
	{
		double m,n;
		cin >> m >>n;
		minimum(m,n);
	 } 
	 else if(2==t)
	 {
	 	char x,y;
		cin >> x >> y;
		minimum(x,y);
	 }
	else
	{
		int q,w;
		cin >> q >> w;
		minimum(q,w);
	}
	
	return 0;
}
