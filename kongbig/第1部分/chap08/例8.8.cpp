/*
����һ���������Ϊ100���ַ�����
���ַ�����ķ�ʽ�洢���ٽ��ַ������򴢴棬
������򴢴����ַ��� 
*/
#include<cstdio>
#include<cstring>
using namespace std;
// ���������ַ���λ�� 
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
	// len = 15��i��ʼֵΪ6 
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
