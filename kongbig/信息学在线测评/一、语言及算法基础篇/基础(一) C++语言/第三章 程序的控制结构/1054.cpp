#include<cstdio>
using namespace std;
int main()
{
	// �����Ρ�����֮�ʹ��ڵ����ߣ�����֮��С�ڵ����ߡ�
	int x, y, z;
	scanf("%d %d %d", &x, &y, &z);
	if (x + y > z && x + z > y && y + z > x)
	{
		printf("%s", "yes");
	}
	else
	{
		printf("%s", "no");
	}
	return 0;
}
