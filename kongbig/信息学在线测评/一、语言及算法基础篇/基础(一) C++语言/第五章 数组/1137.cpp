#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	char ch[50];
	gets(ch);
	int len = strlen(ch);
	for (int i = 0; i < len; i++)
	{
		// 右移3位
		if ((ch[i] >= 'a' && ch[i] <= 'w') || (ch[i] >= 'A' && ch[i] <= 'W'))
		{
			ch[i] = ch[i] + 3;
		}
		else if (ch[i] == 'x')
		{
			ch[i] = 'a';
		}
		else if (ch[i] == 'y')
		{
			ch[i] = 'b';
		}
		else if (ch[i] == 'z')
		{
			ch[i] = 'c';
		}
		else if (ch[i] == 'X')
		{
			ch[i] = 'A';
		}
		else if (ch[i] == 'Y')
		{
			ch[i] = 'B';
		}
		else if (ch[i] == 'Z')
		{
			ch[i] = 'C';
		}
		
		// 大小写转换
		if (ch[i] >= 'a' && ch[i] <= 'z')
		{
			ch[i] = ch[i] - 32;
		}
		else if (ch[i] >= 'A' && ch[i] <= 'Z')
		{
			ch[i] = ch[i] + 32;
		}
	}
	// 倒序输出
	for (int i = len - 1; i >= 0; i--)
	{
		printf("%c", ch[i]);
	}
	return 0; 
}
