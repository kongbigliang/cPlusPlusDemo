// ͷ 
#include<cstdio>
// ��׼�����ռ� 
using namespace std;
// ������ 
int main()
{
	// �������롢������� 
	float a,b;
	float c;
	// ���� 
	scanf("%f %f", &a, &b);
	// ���� 
	c = b / a * 100;
	// ��� 
	printf("%.3f%c",c,'%'); 
	return 0;
} 
