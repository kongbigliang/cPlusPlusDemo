#include<iostream>
using namespace std;
int t (int a)
{
	return a;
}
int main()
{
	// 显示函数地址 
	cout<<t<<endl;
	// 定义函数指针变量p 
	int (* p) (int a);
	// 将函数t的地址赋给函数指针p
	p = t;
	cout<<p(5)<<','<<(* p)(10)<<endl;
	// 输出p(5)是C++的写法，(* p)(10)是兼容c，这是使用p来调用函数的两种方法 
	return 0;
}
