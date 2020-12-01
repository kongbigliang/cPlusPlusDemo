/*
高精度加法。输入两个正整数，求它们的和。 
*/
#include<iostream> 
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	char a1[100], b1[100];
	int a[100], b[100], c[100], lena, lenb, lenc, i, x;
	memset(a, 0, sizeof(a));
	memset(b, 0, sizeof(b));
	memset(c, 0, sizeof(c));
	gets(a1);
	gets(b1);
	lena = strlen(a1);
	lenb = strlen(b1);
	for (i = 0; i <= lena - 1; i++)
		// 加数放入a数组 
		a[lena - i] = a1[i] - 48;
	for (i = 0; i <= lenb - 1; i++)
		// 加数放入b数组
		b[lenb - i] = b1[i] - 48;
	lenc = 1;
	x = 0;
	while (lenc <= lena || lenc <= lenb)
	{
		// 两数相加
		c[lenc] = a[lenc] + b[lenc] + x;
		x = c[lenc] / 10;
		c[lenc] %= 10;
		lenc++;
	}
	c[lenc] = x;
	if (c[lenc] == 0)
		// 处理最高进位 
		lenc--;
	for (i = lenc; i >= 1; i--)
		cout<<c[i];
	cout<<endl;
	return 0;
}
