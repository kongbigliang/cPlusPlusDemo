/*
˫��ָ�����þ��� 
*/
#include<cstdio>
using namespace std;
int a = 10;
int *p;
// ����˫��ָ�� 
int * *pp; 
int main()
{
	// ��pָ��a
	p = &a;
	// ��ppָ��p
	pp = &p;
	// * *pͨ��2�Σ���ӷ�����a�ı�����ֵ10 
	printf("%d = %d = %d\n", a, *p, **pp);
	return 0;
}
