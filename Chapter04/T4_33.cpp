/*
 * FileName: T4_33.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: Mar 16th, 2022
 * Function: Three lines of the triple
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
        if( a*a+b*b==c*c || a*a==b*b+c*c || a*a+c*c==b*b)
            cout << "能构成一个直角三角形" << endl;
        else
            cout << "不能构成一个直角三角形" << endl;
    }
    else
        cout << "不能构成一个三角形" << endl;
    return 0;
}
