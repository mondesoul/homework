/*
 * FileName: T2_30.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: Mar 11th, 2022
 * Function: BIM
 */

//多项选择之下顺序else
#include <iostream>

using namespace std;

int main ()
{
	double weight,height;
	cin >> weight >> height ;

	double BIM = weight / height / height;

	if ( BIM < 18.5 )
	   cout << "Underweight" << endl;
    else if ( BIM >= 30 )
	  cout << "Obese" << endl;
	else if ( 18.5 <= BIM <= 24.9 )
	  cout << "Normal" << endl;
	else
	  cout << "Overweight" << endl;

	return 0;
 }
