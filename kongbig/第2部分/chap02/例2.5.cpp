/*
快速排序法 
*/
#include<cstdio>
using namespace std;
int partition(int a[], int low, int high)
{
	// 基准值
	int pivot = a[low];
	while (low < high)
	{
		while (low < high && a[high] >= pivot)
			--high;
		a[low] = a[high];
		while (low < high && a[low] <= pivot)
			++low;
		a[high] = a[low];
	}
	a[low] = pivot;
	return low;
}
void quick_sort(int a[], int low, int high)
{
	if (low < high)
	{
		int pivot = partition(a, low, high);
		quick_sort(a, low, pivot - 1);
		quick_sort(a, pivot + 1, high);
	}
}
int main()
{
	int a[8] = {36, 25, 48, 12, 65, 43, 20, 58};
	int len = sizeof(a) / sizeof(a[0]);
	quick_sort(a, 0, len - 1);
	for (int i = 0; i < len; i++)
		printf("%d ", a[i]);
	return 0;
}
