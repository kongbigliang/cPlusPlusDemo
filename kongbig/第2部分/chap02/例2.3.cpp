/*
≤Â»Î≈≈–Ú 
*/
#include<cstdio>
using namespace std;
insertion_sort(int a[], int len)
{
	for (int i = 1; i < len; i++)
	{
		int key = a[i];
		int j = i - 1;
		while (j >= 0 && (a[j] > key))
		{
			// Õ˘∫Û“∆ 
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = key;
	}
}
int main()
{
	int a[8] = {36, 25, 48, 12, 65, 43, 20, 58};
	int len = sizeof(a) / sizeof(a[0]);
	insertion_sort(a, len);
	for (int i = 0; i < len; i++)
		printf("%d ", a[i]);
	return 0;
}
