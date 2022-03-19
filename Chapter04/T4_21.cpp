/*
 * FileName: T4_21.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: Mar 15th, 2022
 * Function: Out put  
*/
#include<iostream>
using namespace std;
int main()
{
	unsigned int count = 1;
	while( count <= 10)
	{
		cout << ( count % 2 ? "****" : "++++++++" ) << endl;
		
		++count;
	}
/*
****		//   wufalijie
++++++++
****
++++++++
****
++++++++
****
++++++++
****
++++++++
*/
}
