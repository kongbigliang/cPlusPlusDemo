/*
流读取运算符>>和cin的使用 
*/
#include<iostream>
using namespace std;
int main()
{
	char c;
	int i;
	float x, y;
	cout<<"enter:\n";
	cin>>i>>x>>y;
	c = i;
	cout<<"c = "<<c<<"\ti = "<<i<<"\n";
	cout<<"x = "<<x<<"\ty = "<<y<<"\n";
	return 0;
}
