/*
���룺3λ��
�������λ�����λ���Ե������
*/
#include<iostream>
using namespace std;
int main() {
	int m;
	cin>>m;
	// ��λ��
	int a = m / 100;
	// ʮλ��
	int b = m / 10 % 10;
	// ��λ��
	int c = m % 10;
	cout<<c<<b<<a<<endl;
	return 0; 
}
