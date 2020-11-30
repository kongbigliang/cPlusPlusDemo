/*
输入一个字符
输出一个菱形 
*/ 
#include<cstdio>
using namespace std;
int main()
{
	printf("请输入一个字符：\n");
	char ch;
	scanf("%c", &ch);
	printf("  %c\n", ch);
	printf(" %c%c%c\n", ch, ch, ch);
	printf("%c%c%c%c%c\n", ch, ch, ch, ch, ch);
	printf(" %c%c%c\n", ch, ch, ch);
	printf("  %c\n", ch);
	return 0;
}
