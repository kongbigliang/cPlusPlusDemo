#include<cstdio>
using namespace std;
// PI �ǳ������ţ�����3.1415926 
const double PI = 3.1415926;
int main()
{
	float r, c, s;
	// ��ӡ��ʾ�� r =  
	printf("r = "); 
	// ����r��ֵ
	scanf("%f", &r);
	// ����Բ���ܳ� 
	c = 2 * PI * r;
	// ����Բ����� 
	s = PI * r * r;
	// ��ӡ��������������λС�� 
	printf("c = %.2f\ts = %.2f\n", c, s);
}
