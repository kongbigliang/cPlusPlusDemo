/*
ѡ������ 
����n��������С��������n < 10000��
*/
#include<cstdio>
using namespace std;
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void selection_sort(int a[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		int min = i;
		for (int j = i + 1; j < len; j++)
		{
			if (a[j] < a[min])
				// ��¼��Сֵ 
				min = j;
		}
		// ������
		swap(&a[min], &a[i]);
	}
} 
int main()
{
	int a[8] = {49, 38, 65, 97, 76, 13, 27, 49};
	int len = sizeof(a) / sizeof(a[0]);
	selection_sort(a, len);
	for (int i = 0; i < len; i++)
		printf("%d ", a[i]);
	return 0;
}
