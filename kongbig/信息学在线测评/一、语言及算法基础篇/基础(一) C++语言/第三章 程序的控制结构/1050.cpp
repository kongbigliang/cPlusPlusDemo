#include<cstdio>
using namespace std;
int main()
{
	// �������������г�27�룻
	// ͣ������23�룻
	// ����ÿ����1.2��
	// �ﳵÿ����3.0��
	// �ﳵ�� ���Bike
	// ��·�� ���Walk
	// һ���� ���All
	int n;
	float b, w;
	scanf("%d", &n);
	b = n / 3.0 + 23 + 27;
	w = n / 1.2;
	if (b < w)
	{
		printf("%s", "Bike");
	}
	else if (b > w)
	{
		printf("%s", "Walk");	
	}
	else if (b == w)
	{
		printf("%s", "All");
	}
	return 0;
}
