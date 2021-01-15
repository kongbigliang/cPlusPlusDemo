#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	char ch[255];
	gets(ch);
	int len = strlen(ch);
	for (int i = 0; i < len; i++)
	{
		if ((ch[i] >= 'a' && ch[i] <= 'y') || (ch[i] >= 'A' && ch[i] <= 'Y'))
		{
			printf("%c", ch[i] + 1);
		} 
		else if (ch[i] == 'z')
		{
			printf("%c", 'a');
		}
		else if (ch[i] == 'Z')
		{
			printf("%c", 'A');
		}
		else
		{
			printf("%c", ch[i]);
		}
	}
	return 0;
}
 
