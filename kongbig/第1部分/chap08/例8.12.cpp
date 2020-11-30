/*
使用typedef定义函数指针示例 
*/
#include<iostream>
using namespace std;
int sum(int a, int b)
{
	return a + b;
}

// 定义了一个函数指针变量类型LP 
typedef int (* LP) (int, int);

int main()
{
	// 定义了一个LP类型的函数指针LP，并赋值为su'm 
	LP p = sum;
	// 使用p来调用函数，实参为2和5，调用sum函数
	cout<<p(2, 5);
	return 0; 
}
