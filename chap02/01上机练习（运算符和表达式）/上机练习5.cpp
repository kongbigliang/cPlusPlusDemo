/*
��������a��b�ֱ���Ϊ���Ӻͷ�ĸ��������a / b�������ĸ�����ֵ��˫���ȸ�����������С�����9λ�� 
*/
#include<cstdio>
using namespace std;
int main()
{
	int a, b;
	double result;
	printf("����������a,b���Կո�ֿ���");
	scanf("%d %d", &a, &b);
	result = a / b;
	printf("a / b���Ϊ��%.9lf", result);
	return 0; 
} 
