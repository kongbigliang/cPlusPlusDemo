#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a, b, n, mol = -1, dev;
    scanf("%d %d %d", &a, &b, &n);
    for(int i = 0; i <= n; i++)
	{
        if(mol == 0)
		{
            printf("0");
            return 0;
        }
		dev = a / b;
		mol = a % b;
        a -= dev * b;
		a *= 10;
    }
    printf("%d", dev);
    return 0;
}
