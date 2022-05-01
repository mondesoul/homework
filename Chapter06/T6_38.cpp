/*
 * FileName: T6_38.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: April 9th, 2022
 * Function:  Hannotta problem
*/
#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<cstdlib> //rand ����� 
#include<cmath> //floor���� 
using namespace std;

int main()
{
	//��n�����Ӵ�1�ƶ���3 
     void hanoi(int n,int one,int two,int three);
     int m;
     cout<<"׼���ƶ���������:";
     cin>>m;;
     hanoi(m,1,2,3);
}
 
 
void hanoi(int n,int one,int two,int three)
{
     void move(int x,int y);
     if (n == 1)
     {
           move(one,three);
     }
     else
     {
         hanoi(n-1,one,three,two);
         //�����������������ƶ����ڶ��� 
         move(one,three);
         //�����Ǹ�����ƶ��������� 
         hanoi(n-1,two,one,three);
     }
}
 
 //void Ҫ��cout 
void move(int  x, int  y)
{
     cout<<x<<"-->"<<y<<endl;
}

