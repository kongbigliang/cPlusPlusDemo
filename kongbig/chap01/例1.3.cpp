/*
例1.3 已知一位小朋友的电影票是10元，计算x位小朋友的总票价是多少？
【分析】设总票价为 y；小朋友的数目为 x； 
 公式：y = 10 * x 
*/ 
#include<cstdio>		// printf和scanf 
#include<iostream>		// cin、cout 
using namespace std;
int main()
{
	int x,y;
	cin>>x;
	y = 10 * x;
	cout<<"x = "<<x<<"\ty = "<<y<<endl;
	return 0;
}
