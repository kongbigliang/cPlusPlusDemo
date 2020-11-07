#include<cstdio>
using namespace std;
int main()
{
	int m, tmp, max = 0, min = 9999;
	scanf("%d", &m);
	for (int i = 0; i < m; i++)
	{
		scanf("%d", &tmp);
		max = max > tmp ? max : tmp;
		min = min < tmp ? min : tmp;
	}
	printf("%d", max - min);
	return 0; 
}
