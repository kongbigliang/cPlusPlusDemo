/*
Բ����ı����
�������뾶r�͸�h�����Բ����ı����������3ΪС�󣬸�ʽ���£�
���룺3.5 9		�����274.889

Բ�������� = �ϵ���� + �µ���� + �����
�����=��rƽ��		�����=2��rh 
*/ 
#include<cstdio>		// ʹ��printf��scanf�������cstdio��
using namespace std;
int main()
{
	// ����piΪ˫����ʵ�ͱ��� 
	const double pi = 3.1415926;
	//����˫����ʵ�ͣ�floatΪ������ʵ��
	double r,h,s1,s2,s;
	// r��hǰ��&���Ų���©����double����%lf 
	scanf("%lf%lf", &r, &h); 
	// ��������
	s1 = pi * r * r;
	// ��������
	s2 = 2 * pi * r;
	// ���������
	s = s1 + s2;
	// ����3λС�� 
	printf("Area = %0.3lf\n", s);
	return 0; 
} 









