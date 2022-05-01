/*
 * FileName: T6_24.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: April 9th, 2022
 * Function: The digital separation
*/
#include<iostream>
#include<iomanip>
#include<cstdlib> //rand Ëæ»úÊý 
#include<cmath> //floorº¯Êý 
using namespace std;

int rem(int m);
int div(int n); 

int main()
{
 int n,i=0;
 cin>>n;
 int a[5];
 while(n)
 {
  a[i++]=rem(n);
  n=div(n);
 }
 
 for(int j=i-1;j>=0;j--)
 {
 	 cout<<a[j]<<" ";
 }
	 cout<<endl;
	 return 0;
}


int rem(int n)
{
	 n=n%10;
	 return n;
}

int div(int n)
{
	 n=n/10;
	 return n;
}
