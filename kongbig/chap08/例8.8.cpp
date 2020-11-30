/*
输入一个长度最大为100的字符串，
以字符数组的方式存储，再将字符串倒序储存，
输出倒序储存后的字符串 
*/
#include<cstdio>
#include<cstring>
using namespace std;
// 交换两个字符的位置 
void swapp(char &a, char &b)
{
	char temp;
	temp = a;
	a = b;
	b = temp;
}
void work(char *str)
{
	int len = strlen(str);
	printf("len = %d\n", len);
	// len = 15，i初始值为6 
	for (int i = 0; i <= len / 2 - 1; i++)
		swapp(str[i], str[len - i - 1]); 
}

int main()
{
	char s[110];
	char *str = s;
	gets(s);
	work(str);
	printf("%s", s);
	return 0;
}
