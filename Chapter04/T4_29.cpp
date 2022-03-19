/*
 * FileName: T4_29.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: Mar 16th, 2022
 * Function: Multiple of two in an infinite loop
 */
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long int   j = 1;
    while( j > 0 )
    {

        j = j * 2;
        cout <<  j << endl;

    }//这个会在达到极大值时返回最小值，无限循环 
    return 0;
}
