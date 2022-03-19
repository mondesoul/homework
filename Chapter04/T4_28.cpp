/*
 * FileName: T4_28.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: Mar 16th, 2022
 * Function: Asterisk checkerboard pattern
 */
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    for (int i=1 ; i<=8 ; i++ )
    {
        if ( i % 2 != 0)
        {
            for ( int j=1;j<=8 ;j++)
            {
                if (j==8)
                {
                    cout << "*" ;
                    cout << " " ;
                cout << endl;
                }
                else
                {
                    cout << "*" ;
                    cout << " " ;
                }
            }

        }

        else
        {
            cout << " " ;
            for ( int j=1;j<=8 ;j++)
            {
                if (j==8)
                {
                    cout << "*" ;
                    cout << " " ;
                cout << endl;}
                else
                {
                    cout << "*" ;
                    cout << " " ;
                }
            }

        }

    }
    return 0;
}
