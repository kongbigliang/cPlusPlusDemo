/*
复合算术赋值 
*/
#include<iostream>
using namespace std;
int main()
{
	int x = 7, y = 8;
	// 相当于：y - x 后，x++，所以z1 = 8 -7 = 1；x++后x = 8 
	int z1 = y - (x++);
	// 相当于：先x自增，即++x后x=9，所以z2 = 8 - 9 = -1 
	int z2 = y - (++x);
	cout<<"z1 = "<<z1<<"   z2 = "<<z2<<endl;
} 
