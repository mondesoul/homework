/*
 * FileName: T5_21.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: Mar 25th, 2022
 * Function: Calculate salary
*/
#include <iostream>

using namespace std;

double getprice(int , int);
int main()
{
    int a,b,c,d,e,t,number,sum;
    cin>>a>>b>>c>>d>>e>>t>>number;
    while(true)
    {
    switch(number)
    {
        case 1:sum=a;break;
        case 2:sum=40*b+1.5*(t-40)*b;break;
        case 3:sum=250+c*0.057;break;
        case 4:sum=d*e;break;
    }
    cout << "Salary="<<sum << endl;
    cout<<"Do you want to continue?1 to yes,2 to no:"<<endl;
    int answer;
    cin>>answer;
    if(1==answer)
    {
        cout<<"Please input the number"<<endl;
        cin>>number;
    }
    else{
        break;
    }
    }
    return 0;
}
