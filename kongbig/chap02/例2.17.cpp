/*
1号、2号、3号、4号、5号小朋友
将自己的糖果均分3份（多余的自己吃掉：可知，用int类型，方便把余数去掉）
自己留一份，其它分给相邻的两个小朋友。
一轮后，每个小朋友分别有多少个糖果？ 
*/
#include<cstdio>
using namespace std;
int main()
{
	int a, b, c, d, e;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	// 1号小朋友分糖 
	a = a / 3; e = e + a; b = b + a; 
	// 2号小朋友分糖
	b = b / 3; a = a + b; c = c + b;
	c = c / 3; b = b + c; d = d + c;
	d = d / 3; c = c + d; e = e + d;
	e = e / 3; d = d + e; a = a + e;
	printf("%5d%5d%5d%5d%5d\n", a, b, c, d, e);
	return 0; 
} 
