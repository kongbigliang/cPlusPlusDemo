/*
编写一个函数，将三个整数变量排序，
并将三者中的最小值赋给第一个变量，
次小值赋给第二个变量，
最大值赋给第三个变量 
*/
// 指针作为函数参数 
#include<cstdio>
using namespace std;
void swap(int * x, int * y)
{
	int temp = * x;
	* x = * y;
	* y = temp;
}
void sort(int * x, int * y, int * z)
{
	if (* x > * y)
		swap(x, y);
	if (* x > * z);
		swap(x, z);
	if (* y > * z)
		swap(y, z);
}

int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	sort(&a, &b, &c);
	printf("%d %d %d", a, b, c);
	return 0;
}
