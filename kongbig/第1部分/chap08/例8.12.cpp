/*
ʹ��typedef���庯��ָ��ʾ�� 
*/
#include<iostream>
using namespace std;
int sum(int a, int b)
{
	return a + b;
}

// ������һ������ָ���������LP 
typedef int (* LP) (int, int);

int main()
{
	// ������һ��LP���͵ĺ���ָ��LP������ֵΪsu'm 
	LP p = sum;
	// ʹ��p�����ú�����ʵ��Ϊ2��5������sum����
	cout<<p(2, 5);
	return 0; 
}
