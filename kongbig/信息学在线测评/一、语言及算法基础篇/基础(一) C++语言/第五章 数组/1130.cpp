#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	char a[100000], c;
	gets(a);
	int n = strlen(a);
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 97 || a[i] > 122)
		{
			break;
		}
		c = a[i];
		int sum = 0;
		for (int j = 0; j < n; j++)
		{
			// c��ȫ��Ԫ����� 
			if (c == a[j])
			{
				sum++;
			}
		}
		// �����һ��������һ�ε��ַ� 
		if (sum == 1)
		{
			printf("%c", c);
			break;
		}
		if (i == n - 1)
		{
			printf("%s", "no");	
		} 
	}
	return 0;
}
