#include<iostream>
using namespace std;
int t (int a)
{
	return a;
}
int main()
{
	// ��ʾ������ַ 
	cout<<t<<endl;
	// ���庯��ָ�����p 
	int (* p) (int a);
	// ������t�ĵ�ַ��������ָ��p
	p = t;
	cout<<p(5)<<','<<(* p)(10)<<endl;
	// ���p(5)��C++��д����(* p)(10)�Ǽ���c������ʹ��p�����ú��������ַ��� 
	return 0;
}
