/*
�������������� a��b���Խ���a��b��ֵ 
*/ 
#include<iostream>		//ʹ��cin��cout�������iostream�⡣ 
using namespace std;
int main()
{
	// ����3������ 
	int a, b , temp;
	cout<<"����a,b=";
	cin>>a>>b;
	// ����a,b��ֵ 
	temp = a;	a = b;	b = temp;
	cout<<"a = "<<a<<"\tb = "<<b<<endl; 
}
