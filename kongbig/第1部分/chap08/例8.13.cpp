#include<iostream>
using namespace std;
void t1() { cout<<"test1"; }
void t2() { cout<<"test2"; }
void t3() { cout<<"test3"; }
void t4() { cout<<"test4"; }
void t5() { cout<<"test5"; }

// 定义了一个函数指针变量类型LP 
typedef void (* LP) ();

int main()
{
	// 定义了一个LP类型的函数指针数组a，并初始化 
	LP a[] = {t1, t2, t3, t4, t5};
	int x;
	cin>>x;
	// 使用a[x]() 来调用选择的函数 
	a[x](); 
	return 0;
}
