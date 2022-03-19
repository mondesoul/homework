/*
 * FileName: T4_26.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: Mar 16th, 2022
 * Function: Palindromic number
 */
#include <iostream>
using namespace std;
int main()
{
    int n;
    int m;
    cin >> n;

    m=n;
    int t=0;
    while ( m != 0 )
    {
        t = t *10 + m%10;
        m /= 10;

    }
    if( t == n )
        cout << "是回文数" << endl;
    else
        cout << "不是回文数" << endl;
    return 0;


}
