/*
 * FileName: T4_18.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: Mar 15th, 2022
 * Function: Form the output
*/
#include<iostream>
using namespace std;
int main()
{
	int N,i=1;
	N = 5;
	
	cout << "N\t10*N\t100*N\t1000*N" << endl;
	cout <<endl;
	//中间存在一行 
	while(i <= N )
	{
		cout <<i<<"\t" <<i*10<<"\t"<<i*100<<"\t"<<i*1000<<endl;
		i++;
	}
	return 0;
}
