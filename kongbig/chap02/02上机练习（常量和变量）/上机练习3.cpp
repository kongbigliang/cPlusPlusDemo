/*
C = 5 * (F - 32) / 9;
C�������¶ȣ�F�������¶�
���뻪���¶�f����������¶�c��Ҫ��ȷ��С�����5λ�� 
*/ 
#include<cstdio>
int main()
{
	float c, f;
	printf("�����뻪���¶ȣ�\n");
	scanf("%f", &f);
	c = 5 * (f - 32) / 9;
	printf("�����¶�ֵΪ��%.5f", c);
	return 0;
}
