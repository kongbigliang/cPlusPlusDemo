#include<cstdio>
using namespace std;
const double PI = 3.14;
int main()
{
	// v = 4/3 * ��* r ^ 3
	double r, v;
	scanf("%lf", &r);
	// ��4.0�Ų�����ʧ���� 
	v = 4.0 / 3 * PI * r * r * r;
	printf("%.2lf", v);
	return 0; 
}
