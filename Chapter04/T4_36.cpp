/*
 * FileName: T4_36.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: Mar 9th, 2022
 * Function: Use encryption systems to enhance privacy
 */
#include <iostream>

using namespace std;
int f (int ber)
{
    if(  7 == ber )//双等于
            return  0 ;
    else if ( ber > 7)
            return  ber-7;
   else
            return  ber +10 -7;
}  //必须用return 不能用赋值符号 
int main()
{
	int n;
	cin >> n;
	//加密的密钥为1 
	if( n == 1){
		int a;
		while( cin >> a){
			int s,d,f,g;
			s = ((a/10%10)+7)%10;
			d = ((a%10)+7)%10;
			f = ((a/1000)+7)%10;
			g = ((a/100%10)+7)%10;
			cout << s << d << f << g;
			
			
		}
		
	}

    if( n == 2){
	//解密的密钥为2 
	int number;

    while (cin >> number){
    
        int q = number/10%10;
        int w = number%10;
        int e = number/1000;
        int r = number/100%10;

        q = f(q);
        w = f(w);
        e = f(e);
        r = f(r);
        cout << q << w << e << r <<endl;

    }
	}
    return 0;
}
