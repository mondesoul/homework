/*
 * FileName: T2_20.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: Mar 9th, 2022
 * Function: The diameter ,circumference and area of a circle
 */

#include <iostream>
#define PI 3.14159

using namespace std;

int main()
{
    int r;
	cin >> r;

	cout << "Բ��ֱ����" << 2 * r << endl;

	int c = 2 * PI * r;
	cout << "Բ���ܳ���" << c << endl;

	int s = PI * r * r;
	cout << "Բ�������" << s << endl;
    return 0;
}
