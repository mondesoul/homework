/*
 * FileName: T6_34.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: April 9th, 2022
 * Function: Number game
*/
#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<cstdlib> //rand 随机数 
#include<cmath> //floor函数 
using namespace std;
int main()
{
	int m;
	cout << "I have a number between 1 and 1000." << endl;
	cout << "Can you guess my number?" << endl;
	cout << "Please type your first guess." << endl;
	int n=1+rand()%1000;
	//放在循环之外，防止重置随机数 
	while(1)
	{
		
		cin >> m;
		if(m==n)
		{
			int chioce;
			cout << "Excellent! You guessed the number!" << endl;
			cout << "Would you like to play again (y or n)?" << endl;
			cin >> chioce;
			if(1==chioce)
			{
				cout << "I have a number between 1 and 1000." << endl;
				cout << "Can you guess my number?" << endl;
				cout << "Please type your first guess." << endl;
				continue;
			}
			else
			break;
		}
		else if(m>n)
		{
			cout << "Too high. Try again." <<endl;
			cout << "I have a number between 1 and 1000." << endl;
			cout << "Can you guess my number?" << endl;
			cout << "Please type your first guess." << endl;
			continue;
		}
		else
		{
			cout << "Too low. Try again." <<endl;
			cout << "I have a number between 1 and 1000." << endl;
			cout << "Can you guess my number?" << endl;
			cout << "Please type your first guess." << endl;
			continue;
		}
	}
	return 0;
}
