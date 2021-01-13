#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	char c[100];
	gets(c);
	int len = strlen(c);
	// 不以数字开头
	if (c[0] >= '0' && c[0] <= '9')
	{
		printf("no");
		return 0;	
	}
	// 只包含字母、数字及下划线 
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
