/*
 * FileName: T4_32.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: Mar 16th, 2022
 * Function: triple
 */
#include <iostream>
#include <cmath>
#define pi 3.14159
using namespace std;
int main()
{

    double a,b,c;
    cin >> a >> b >> c;
    if (a>0&&b>0&&c>0)
    {
        if( a+b>c && a+c>b && b+c>a)
            cout << "�ܹ���һ��������" << endl;
        else
            cout << "���ܹ���һ��������" << endl;
    }
    else
        cout << "���ܹ���һ��������" << endl;
    return 0;
}
