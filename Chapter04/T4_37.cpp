/*
 * FileName: T4_37.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: Mar 15th, 2022
 * Function: Population in the world
 */
#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	double  population=71.0; //单位为亿 
	double growRate=0.012,grownumber;  //使用double 
	int m;
	
	cout << "年份\t年末预期人口（单位/亿）\t该年人口增长数（单位/亿）\t" << endl; 
	for (int i=1;i<=75;i++)
	{
		cout <<  fixed <<setprecision(5) ;
		
		grownumber = population * growRate ;
		population += grownumber;//不要在for循环内部定义变量 
		cout << "第" << i << "年\t" <<  population << "     	\t" << grownumber <<"\t" <<endl;
		if (population <= 142)
		{
		
			m = i;
		}
	}
	cout << endl; 
	cout << "第" << m <<"年的世界人口约是今年的两倍" << endl;  
 } 
 
