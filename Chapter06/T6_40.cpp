/*
 * FileName: T6_40.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: April 12th, 2022
 * Function: vasiual 
*/
#include <iostream>

using namespace std;

int fibonacci(int number)
{
    if(number==0||number==1)
    {
        return number;
    }
    else
    {
        for(int i=1;i<=number;i++)
            cout<<"\t";
        cout<<number-1<<" "<<number-2<<endl;
        return fibonacci(number-1)+fibonacci(number-1);
}}

int main()
{
    int counter=10;
    for(int counter=0;counter<=10;counter++)
    {
        cout<<"fibonacci("<<counter<<")="<<fibonacci(counter)<<endl;
    }

    return 0;
}
