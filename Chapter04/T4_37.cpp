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
	double  population=71.0; //��λΪ�� 
	double growRate=0.012,grownumber;  //ʹ��double 
	int m;
	
	cout << "���\t��ĩԤ���˿ڣ���λ/�ڣ�\t�����˿�����������λ/�ڣ�\t" << endl; 
	for (int i=1;i<=75;i++)
	{
		cout <<  fixed <<setprecision(5) ;
		
		grownumber = population * growRate ;
		population += grownumber;//��Ҫ��forѭ���ڲ�������� 
		cout << "��" << i << "��\t" <<  population << "     	\t" << grownumber <<"\t" <<endl;
		if (population <= 142)
		{
		
			m = i;
		}
	}
	cout << endl; 
	cout << "��" << m <<"��������˿�Լ�ǽ��������" << endl;  
 } 
 
