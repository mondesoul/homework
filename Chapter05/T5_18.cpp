/*
 * FileName: T5_18.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: Mar 25th, 2022
 * Function: Into the TAB
*/
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;
string intToA(int n,int radix)    //n是待转数字，radix是指定的进制
{
	string ans="";
	while(n!=0)
	{
		int t=n%radix;
		
		if(t>=0&&t<=9)	
			ans+=t+'0';
		else 
			ans+=t-10+'a';
		n/=radix;
	}
	reverse(ans.begin(),ans.end());
	return ans;	
}
int main()
{
	
	for(int i=1;i<=256;i++)
	{
		if(1==i)
		cout << "十进制\t" <<  "八进制\t" << "十六进制\t"  <<"二进制"  << endl; 
		//binary   octal   hexadecimal  
		cout << i << "\t"   <<intToA(i,8) <<"\t"  << intToA(i,16) <<"\t\t"  << intToA(i,2) << endl;
		
		//二进制比较长，放在后面
		//为什么要用两个制表符 
	 }
	return 0;
}
