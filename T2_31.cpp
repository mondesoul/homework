/*
 * FileName: T2_31.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: Mar 11th, 2022
 * Function: car cost
 */


#include <iostream>

using namespace std;

int main()
{
	int mile,average_price,average_mile;
	int parking_free,passage_money;

	cin >> mile >> average_price >> average_mile >> parking_free >> passage_money;

	int all_in_cost = mile/average_mile*average_price;
	all_in_cost += parking_free + passage_money;

	cout << all_in_cost << endl;
	return 0;
 }
