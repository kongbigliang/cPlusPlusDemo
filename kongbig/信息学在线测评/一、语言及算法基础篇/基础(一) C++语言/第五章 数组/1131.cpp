#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	double th, sum = 0;
	char a1[500], a2[500];
	// ������ֵ 
	scanf("%lf", &th);
	// ��������
	scanf("%s %s", &a1, &a2);
	// ��ȡ���鳤�� 
	int len = strlen(a1);
	for (int i = 0; i< len; i++)
	{
		sum += a1[i] == a2[i] ? 1 : 0; 
	}
	// ��ռ�� 
	double result = sum / len;
	printf("%s", result >= th ? "yes" : "no");
	return 0;
}
