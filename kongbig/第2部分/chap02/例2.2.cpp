/*
ц╟ещеепР 
*/
#include<cstdio>
using namespace std;
void bubble_sort(int a[], int len)
{
	for (int i = 0; i < len - 1; i++)
		for (int j = 0; j < len - 1 - i; j++)
			if (a[j] > a[j + 1])
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp; 
			}
}
int main()
{
	int a[8] = {49, 38, 65, 97, 76, 13, 27, 49};
	int len = sizeof(a) / sizeof(a[0]);
	bubble_sort(a, len);
	for (int i = 0; i < len; i++)
		printf("%d ", a[i]);
	return 0;
}
