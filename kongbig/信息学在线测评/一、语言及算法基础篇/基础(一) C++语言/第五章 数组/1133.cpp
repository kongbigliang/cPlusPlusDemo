#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	char c[100];
	gets(c);
	int len = strlen(c);
	for (int i = 0; i < len; i++)
	{
		char ch = i == len - 1 ? c[i] + c[0] : c[i] + c[i + 1];
		printf("%c", ch);
	}
	return 0;	
}
