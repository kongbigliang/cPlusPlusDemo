/*
输入x位男生，y位女生，
男生平均分：87，女生平均分85
输出全体同学平均分 
*/
#include<iostream>
using namespace std;
int main()
{
	int x, y;
	cin>>x>>y;
	cout<<"平均分 = "<<float(x * 87 + y * 85) / (x + y)<<endl;
	return 0;
}
