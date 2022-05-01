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
#include<cstdlib> //rand 随机数 
#include<cmath> //floor函数 
using namespace std;

int main()
{
	//将n个盘子从1移动到3 
     void hanoi(int n,int one,int two,int three);
     int m;
     cout<<"准备移动的盘子数:";
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
         //除了最大的其余依次移动到第二个 
         move(one,three);
         //最大的那个最后移动到第三个 
         hanoi(n-1,two,one,three);
     }
}
 
 //void 要有cout 
void move(int  x, int  y)
{
     cout<<x<<"-->"<<y<<endl;
}

