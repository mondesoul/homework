/*
 * FileName: T4_27.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: Mar 16th, 2022
 * Function: Binary to decimal
 */
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int m=0;
    int i=0;
    while ( n != 0 )
    {
        m += pow(2,i) * (n % 10);
        n /= 10;
        i++;
    }
    cout << m << endl;

    return 0;
}
