#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	char c[100];
	gets(c);
	int len = strlen(c);
	// �������ֿ�ͷ
	if (c[0] >= '0' && c[0] <= '9')
	{
		printf("no");
		return 0;	
	}
	// ֻ������ĸ�����ּ��»��� 
	for (int i = 0; i < len; i++)
	{
		if (!(
			(c[i] >= '0' && c[i] <= '9') 
			
			|| c[i] == '_'
			
			|| (c[i]>= 'a' &&c[i] <= 'z') 
			
			|| (c[i]>= 'A' &&c[i] <= 'Z'))
			)
		{
			printf("no");
			return 0;
		}
	}
	printf("yes");
	return 0;
}
