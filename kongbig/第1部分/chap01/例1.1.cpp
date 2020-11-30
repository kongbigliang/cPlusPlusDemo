/*
例1.1 在屏幕上输出“Hello World!” 
*/ 
#include<iostream>					// 使用cin、cout，须调用iostream库，否则编译出错 
#include<cstdlib>					// 使用system()调用cstdlib库 
using namespace std;				// 使用std(标准)命名空间 
int main()
{
	cout<<" Hello World! "<<endl;
	system(" pause ");				// 暂停作用，使用system(" pause ")调用cstdlib库 
	return 0;						// 结果整个程序 
}
