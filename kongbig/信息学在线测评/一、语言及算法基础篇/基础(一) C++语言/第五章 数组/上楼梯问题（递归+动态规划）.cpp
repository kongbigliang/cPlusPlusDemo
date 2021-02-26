/*
쳲��������н����¥�����⡣
n��̨�ף�һ�ο�����1��Ҳ������2�������ж����ַ������϶���
�������û�����ݹ�ģԼ������ô��Ҫ�õݹ�����ʱ���ϵȲ��𣡣���
����һ�£�
	1��̨��ֻ��һ�ַ��� һ�ο�1����
	2��̨����2�ַ���������һ�ο�2�ף�Ҳ���Է����ο�1�ף�
	3��̨��1 1 1��1 2��2 1��3�ַ�����
	4��̨��5�֣�5��8�֣����Ծ���һ�����ӷ�ֳ������(�ֳ�쳲���������)��ֱ���õݹ������ �����ݹ�ģԼ����N<=30��N>=1�� 
*/
#include<cstdio>
using namespace std;
int fi(int n)
{
	if (n == 1)
		return 1;
	else if (n == 2)
		return 2;

	return fi(n - 1) + fi(n - 2);
}

int dp(int n)
{
	if (n <= 2)
		return n;
	int firstStep = 1;
	int secondStep = 2;
	for (int i = 3; i <= n; i++)
	{
		int temp = firstStep + secondStep;
		firstStep = secondStep;
		secondStep = temp;
	}
	return secondStep;
}

int main()
{
	int n;
    scanf("%d", &n);
    // 쳲������ݹ鴦��
    printf("�ݹ鴦��: %d\n", fi(n));
    printf("��������: %d\n", dp(n));
}
