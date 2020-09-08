/*
C = 5 * (F - 32) / 9;
C：摄氏温度；F：华氏温度
输入华氏温度f，输出摄氏温度c，要求精确到小数点后5位。 
*/ 
#include<cstdio>
int main()
{
	float c, f;
	printf("请输入华氏温度：\n");
	scanf("%f", &f);
	c = 5 * (f - 32) / 9;
	printf("摄氏温度值为：%.5f", c);
	return 0;
}
