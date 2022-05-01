/*
 * FileName: T5_20.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: Mar 25th, 2022
 * Function: Pythagorean triad
*/
#include <iostream>
using namespace std;
int main ()
{
	int side1,side2,hypotenuse;
	for ( side1=3;side1<=500;side1++)
	{
		for ( side2=4;side2<=500;side2++)
		{
			
			for ( hypotenuse=5;hypotenuse<=500;hypotenuse++)
			{
				if (hypotenuse*hypotenuse== side1*side1+side2*side2)
					cout << "(" << side1 << "," << side2 << "," << hypotenuse <<")" <<endl;
			}
		}
	}
	return 0;
}
