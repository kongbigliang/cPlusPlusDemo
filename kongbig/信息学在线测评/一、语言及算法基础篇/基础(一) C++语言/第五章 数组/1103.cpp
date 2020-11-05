#include<cstdio>
using namespace std;
int main()
{
	int a[10], hand, count = 0;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	scanf("%d", &hand);
	// ¼ÓÉÏµÊ×Ó
	hand += 30; 
	for (int i = 0; i < 10; i++)
	{
		count += a[i] <= hand ? 1 : 0;
	}
	printf("%d", count);
	return 0;
}
