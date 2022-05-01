/*
 * FileName: T6_42.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: April 12th, 2022
 * Function: Distance between two points
*/
#include<iostream>
#include<iomanip>
#include<cstdlib> //rand Ëæ»úÊý 
#include<cmath> //floorº¯Êý 
using namespace std;
double dist( double x1, double y1, double x2, double y2 )
{
    double D,distant;
    D=pow((x2-x1),2)+pow((y2-y1),2);
    distant=sqrt(D);
    return distant;
}
double dist( double x1, double y1, double x2, double y2 );
 
int main()
{    
    double x1, y1, x2, y2;
 
 	//cout << fixed << setprecision(2) ;
    cin >> x1 >>  y1 >>  x2 >> y2;
    cout << dist(x1, y1, x2, y2) ;
 
    return 0;
}

