#include<cstdio>
using namespace std;
int main()
{
	// <=1000��8Ԫ
	// >1000��ÿ500��4Ԫ
	// �Ӽ���5Ԫ
	int n;
	char c;
	scanf("%d %c", &n, &c);
	if (n <= 1000)
	{
		printf("%d", (c == 'y') ? 8 + 5 : 8);
	}
	else if (n > 1000)
	{
		int x;
		if ((n - 1000) % 500 == 0)
		{
			x = (n - 1000) / 500;
		}
		else
		{
			// �в���500����
			x = (n - 1000) / 500 + 1;
		}
		printf("%d", (c == 'y') ? 8 + x * 4 + 5 : 8 + x * 4);
	}
	else
	{
		printf("%s", "��������");
	}
	return 0;
}
