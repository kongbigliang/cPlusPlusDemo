/*
��1.2 ��֪�����ϡ��µ׳�Ϊ15��25�������εĸ�Ϊh��
����֪���������Ϊ150ƽ�����ף�
��������� = �� * �� / 2��
150 = (15 * h) / 2	��h = 20
������� = (�ϵ� + �µ�) * h / 2 
*/ 
#include<cstdio>			// printf��scanf����cstdio�⣬��C�����пɵ���stdio.h�� 
#include<cstdlib>			// ʹ��system()����cstdlib�� 
using namespace std;		// ʹ�ñ�׼�����ռ� 
int main()
{
	float s,h,up,down;		// float���嵥����ʵ�ͱ��� 
	up=15;
	down=25;
	h=2*150/up;				// ��������� = �� * �� / 2 
	s=(up+down)*h/2;		// ������� = (�ϵ� + �µ�) * �� / 2 
	printf("s=%0.2f\n", s);	// ������λС�� 
	system(" pause ");
	return 0;
}
