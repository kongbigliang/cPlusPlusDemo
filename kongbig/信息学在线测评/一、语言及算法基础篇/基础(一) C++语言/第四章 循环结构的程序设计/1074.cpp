#include<cstdio>
using namespace std;
int main()
{
	// x���ϵ�Ǯ��yΪ�����ǵ�Ǯ��butgetΪԤ�� 
	int x = 0, y = 0, butget; 
	for(int i = 1; i <= 12; i++)
	{
		scanf("%d", &butget);
		x += 300;
		if(x < butget)
		{
			printf("-%d", i);
			return 0;
		}
		x -= butget;
		// y��x�ֱ��ʾ�ж��ٸ�100 
		y += x / 100;
		x %= 100;
	}
	x = x + y * 120;
	printf("%d", x);
	return 0;
}
