/*
无类型指针运用举例 
*/
#include<iostream>
using namespace std;
int a = 10;
double b = 3.5;
void *p; 
int main()
{
	// p的地址赋值 
	p = &a;
	// 必须明确p指向的空间的数据类型 
	cout<<*(int *)p<<endl;
	p = &b;
	cout<<*(double *)p<<endl;
	return 0;
}
