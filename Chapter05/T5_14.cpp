/*
 * FileName: T5_14.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: Mar 25th, 2022
 * Function: Calculate total sales
*/
#include <iostream>
#include <iomanip>
using namespace std;
double getPrice(int, int);
int main()
{
    double total{0.0f};
    int product{0}, quantity{0};
    while (product != -1)
    {
       
        cin >> product;
        if (product != -1)
        {
            cin >> quantity;
            total += getPrice(product, quantity);
            cout << fixed  << setprecision(2)<< total<<endl;
        }
    }
    return 0;
}
double getPrice(int product, int quantity)
{
    switch (product)
    {
        case 1:        return 2.98 * quantity;
        break;
        case 2:        return 4.50 * quantity;
        break;
        case 3:        return 9.98 * quantity;
        break;
        case 4:        return 4.49 * quantity;
        break;
        case 5:        return 6.87 * quantity;
        break;

        return 0.0f;
        break;
    }
}

