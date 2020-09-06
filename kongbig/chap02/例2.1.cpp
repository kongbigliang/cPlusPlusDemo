/*
输入两个正整数 a和b，试交换a、b的值 
*/ 
#include<iostream>		//使用cin，cout，须调用iostream库。 
using namespace std;
int main()
{
	// 定义3个变量 
	int a, b , temp;
	cout<<"输入a,b=";
	cin>>a>>b;
	// 交换a,b的值 
	temp = a;	a = b;	b = temp;
	cout<<"a = "<<a<<"\tb = "<<b<<endl; 
}
