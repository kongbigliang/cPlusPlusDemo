#include<iostream>
using namespace std;
void t1() { cout<<"test1"; }
void t2() { cout<<"test2"; }
void t3() { cout<<"test3"; }
void t4() { cout<<"test4"; }
void t5() { cout<<"test5"; }

// ������һ������ָ���������LP 
typedef void (* LP) ();

int main()
{
	// ������һ��LP���͵ĺ���ָ������a������ʼ�� 
	LP a[] = {t1, t2, t3, t4, t5};
	int x;
	cin>>x;
	// ʹ��a[x]() ������ѡ��ĺ��� 
	a[x](); 
	return 0;
}
