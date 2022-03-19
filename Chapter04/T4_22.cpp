/*
 * FileName: T4_22.cpp
 * Author: Zhenzhen Yao
 * E-mail: 2082482960@qq.com
 * Date: Mar 15th, 2022
 * Function: Out put  
*/
#include<iostream>
using namespace std;
int main()
{
	unsigned int row = 10;
	
	while( row >= 1 )
	{
		unsigned int column = 1;
		
		while( column <= 10 )
		{
			cout << ( row % 2 ? "<" : ">" );
			++column;
		}
		
		--row;
		cout << endl;
		
	}
/*
>>>>>>>>>>     // row == 1    1
<<<<<<<<<<		// row == 2   0 
>>>>>>>>>>
<<<<<<<<<<
>>>>>>>>>>
<<<<<<<<<<
>>>>>>>>>>
<<<<<<<<<<
>>>>>>>>>>
<<<<<<<<<<
*/
	
	return 0;
 } 
