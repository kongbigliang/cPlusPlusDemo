/*
��дһ��������������һ������N���������������ҵ���һ��������
�����򷵻غ����ĵ�ַ��
���򷵻�NULL����ָ�룩 
*/
#include<cstdio>
#include<cmath>
using namespace std;
int n, a[10001];
// �ж�n�ǲ�������
bool isPrime (int n)
{
	if (n < 2)
		return false;
	if (n == 2)
		return true;
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return false;
		
	return true;	
}
int * find()
{
	for (int i = 1; i <= n; i++)
		if (isPrime(a[i]))
			return &a[i];
	return NULL;
}

int main()
{
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		scanf("%d", &a[i]);
	int * p = find();
	if (p != NULL)
		// �����������ĵ�ַ�������� 
		printf("%d\n%d\n", p, * p);
	else
		printf("can't find!'");
	return 0;
}
