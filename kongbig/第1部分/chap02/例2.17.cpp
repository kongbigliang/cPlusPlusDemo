/*
1�š�2�š�3�š�4�š�5��С����
���Լ����ǹ�����3�ݣ�������Լ��Ե�����֪����int���ͣ����������ȥ����
�Լ���һ�ݣ������ָ����ڵ�����С���ѡ�
һ�ֺ�ÿ��С���ѷֱ��ж��ٸ��ǹ��� 
*/
#include<cstdio>
using namespace std;
int main()
{
	int a, b, c, d, e;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	// 1��С���ѷ��� 
	a = a / 3; e = e + a; b = b + a; 
	// 2��С���ѷ���
	b = b / 3; a = a + b; c = c + b;
	c = c / 3; b = b + c; d = d + c;
	d = d / 3; c = c + d; e = e + d;
	e = e / 3; d = d + e; a = a + e;
	printf("%5d%5d%5d%5d%5d\n", a, b, c, d, e);
	return 0; 
} 
