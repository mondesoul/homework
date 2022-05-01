/*
 * FileName: T6_28.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: April 9th, 2022
 * Function: Perfect number
*/
#include<iostream>
#include<iomanip>
#include<cstdlib> //rand ����� 
#include<cmath> //floor���� 
using namespace std;
void isperfect(int n)
//void���÷��ؾ������ֵ������ֱ�ӵ���
//int ���ؾ������ֵ 
{
    int result=0;
    for(int i=1;i<=n/2;i++)
    {
        if(n%i==0) {result=result+i;}
    }
    if(result==n)
    {
        cout<<n<<",its factors are ";
        for(int i=1;i<n;i++)
        {
            if(i==n/2) {cout<<i<<endl;}
            else if(n%i==0)
            {
                cout<<i<<",";
            }
        }
    }
}
int main()
{
    for(int i=1;i<=1000;i++)
    {
        isperfect(i);
    }
    return 0;
}
