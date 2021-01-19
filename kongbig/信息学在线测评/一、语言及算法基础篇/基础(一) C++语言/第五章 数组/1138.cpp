#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	char ch[100];
	gets(ch);
	int len = strlen(ch);
	for (int i = 0; i < len; i++)
	{
		printf("%c", ch[i] >= 'a' && ch[i] <= 'z' ? ch[i] - 32 : ch[i]);
	}
	return 0;
}
