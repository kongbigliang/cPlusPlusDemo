#include<cstdio>
using namespace std;
int main()
{
	int n;
	scanf("%d", &n);
	// �ܱ� 4 �����Ĵ�������꣬
	// ���ܱ� 100 ���� �����ܱ� 400 ��������ݲ�������
	if (n % 4 != 0 || (n % 100 == 0 && n % 400 != 0))
	{
		printf("%c", 'N');
	}
	else
	{
		printf("%c", 'Y');
	}
	return 0;
}
