/*
例1.4
15头牛吃20天；20头牛吃10天，求每天新生的草量可供几头牛吃1天？ 
*/ 
#include<iostream>
using namespace std;
int main()
{
	int s1,s2,s3;
	s1 = 15 * 20;					// 15头牛20天的草量 
	s2 = 20 * 10;					// 20头牛10天的草量 
	s3 = (s1 - s2) / (20 - 10);		// 10天新生草量 / 10 = 每天新生草量 
	cout<<" s = "<<s3<<endl;
	return 0;	
} 
