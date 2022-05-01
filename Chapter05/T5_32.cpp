/*
 * FileName: T5_32.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: Mar 25th, 2022
 * Function: dates  
*/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a,t,x,y;
    int i,j;
    for(j=2;j<=5;j++)
    {
        a=10;
       for(i=1;a<=25;i++)
       {
        a=a*(1+0.01*j);
       }
       x=(i-2)/12;
       y=(i-2)%12;
       cout<<"Facebook的用户将在"<<2013+x<<"年"<<y<<"月达到25亿"<<endl;
    }
    return 0;
}

