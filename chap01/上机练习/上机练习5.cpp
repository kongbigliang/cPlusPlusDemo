/*
�������м���������Դ�ɹ�x��������a�꣬��y��������b�ꡣ
�������������������ˣ�
���룺x a y b 
	x > y��a < b��ax < by����������������10000
������������z���ˣ����뵽С�������λ 
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
