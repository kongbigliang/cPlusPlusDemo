#include<cstdio>
#include<cstring> 
using namespace std;
int main()
{
	char c[255];
	gets(c);
	int len = strlen(c);
	for (int i = 0; i < len; i++)
	{
		if (c[i] == 'A')
			printf("T");
		else if (c[i] == 'T')
			printf("A");
		else if (c[i] == 'G')
			printf("C");
		else if (c[i] == 'C')
			printf("G");
	}
	return 0;
}
