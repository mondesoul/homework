/*
 * FileName: T4_19.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: Mar 15th, 2022
 * Function: Find the two largest numbers
*/
#include<iostream>
using namespace std;
int main()
{
	int counter=2,number,largest,secondLargest;
	cin >> number;
	largest = number;
	cin >> number;
	secondLargest = number;
	int t;
	if ( secondLargest > largest)
	{
		t=secondLargest;secondLargest=largest;largest=t;
	}
	//��������Ҫô��ȣ�Ҫô���� 
	while ( 1 )
	{
		cin >> number;
		if( number > secondLargest && number < largest)
			secondLargest = number;
		if( number > secondLargest && number > largest)
			largest = number;
		
		counter++;
		if( 10 == counter)
		  break;
	}
	cout <<"���ֵ��" <<largest << endl;
	cout <<"�δ�ֵ��"<<secondLargest << endl;
	
	return 0;
 } 
