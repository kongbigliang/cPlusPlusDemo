/*
地球现有加上新生资源可供x亿人生活a年，或供y亿人生活b年。
地球最多能养活多少亿人？
输入：x a y b 
	x > y，a < b，ax < by，各整数均不大于10000
输出：最多养活z亿人，舍入到小数点后两位 
*/
#include<iostream>
using namespace std;
int main()
{
	int x,a,y,b;
	double z;
	cin>>x>>a>>y>>b;
	z = (b * y - a * x) / (x - y);
	cout<<z<<endl;
}
