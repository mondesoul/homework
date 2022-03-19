/*
 * FileName: T4_30.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: Mar 16th, 2022
 * Function: Circle
 */
#include <iostream>
#include <cmath>
#define pi 3.14159
using namespace std;
int main()
{
    double n;
    cin >> n;

    cout << "圆的直径：" << 2*n << endl;
    cout << "圆的周长：" << 2*pi*n << endl;
    cout << "圆的面积：" << pi*n*n <<endl;
    return 0;
}
