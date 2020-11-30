/*
输入：3位数
输出：百位数与个位数对调后的数
*/
#include<iostream>
using namespace std;
int main() {
	int m;
	cin>>m;
	// 百位数
	int a = m / 100;
	// 十位数
	int b = m / 10 % 10;
	// 个位数
	int c = m % 10;
	cout<<c<<b<<a<<endl;
	return 0; 
}
