/*
�ֱ���int��short���ͱ�����һ����������������ǵĴ洢�ռ��С����λ���ֽڣ� 
*/ 
#include<cstdio>
using namespace std;
int main()
{
	int x;
	short y;
	printf("����x��y���Կո�ֿ�\n");
	scanf("%d %d", &x, &y);
	// sizeof����һ���������������ռ���ڴ��ֽ��� 
	printf("����x��ռ�ֽ�����%d\n", sizeof(x)); 
	printf("����y��ռ�ֽ�����%d", sizeof(y)); 
	return 0;
} 
