/*
 * FileName: T6_44.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: April 12th, 2022
 * Function: function 
*/
#include <iostream>

using namespace std;
int mystery(int a,int b)
{
    if(b==1)
        return a;
    if(b==-1)
        return -a;
    if(b>1)
    return a+mystery(a,b-1);
    if(b<-1)
    return -a+mystery(a,b+1);

}
int main()
{
    int x,y;
    cout<<"enter two integers: ";
    cin>>x>>y;
    cout<<mystery(x,y)<<endl;
    return 0;
}
