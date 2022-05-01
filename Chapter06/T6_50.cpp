/*
 * FileName: T6_50.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: April 12th, 2022
 * Function: transport by value 
*/
#include <iostream>

using namespace std;
int tripleByValue(int count)
{
    return 3*count;
}
void tripleBuReference(int &count)
{
    count*=3;
    return;
}
int main()
{
    int count;
    cin>>count;
    cout<<tripleByValue(count)<<endl;
    cout<<count<<endl;
    tripleBuReference(count);
    cout<<count<<endl;
    return 0;
}
