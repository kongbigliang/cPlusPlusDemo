/*
����Բ�İ뾶r��
���Բ��ֱ�����ܳ������������С�����4λ
ֱ��d = 2 * r;
�ܳ�c = 2 * PI * r;
���s = PI * r * r; 
*/
#include<cstdio>
const double PI = 3.1415926;
int main()
{
	int r;
	double d, c, s;
	printf("������Բ�İ뾶r��\n");
	scanf("%d", &r);
	d = 2 * r;
	c = 2 * PI * r;
	s = PI * r * r;
	printf("ֱ��d=%.4f\t�ܳ�c=%.4f\t���s=%.4f", d, c, s); 
	return 0;
}
