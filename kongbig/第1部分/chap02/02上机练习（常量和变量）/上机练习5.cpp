/*
输入电阻值r1和r2，
并联电阻阻值公式计算如下：R = 1 / (1 / r1 + 1 / r2)
输出并联之后的阻值大小，保留小数点后2位。 
*/
#include<cstdio>
int main()
{
	float r1, r2, r;
	printf("输入阻值r1和r2，用空格分开：\n");
	scanf("%f %f", &r1, &r2);
	r = 1 / (1 / r1 + 1 / r2);
	printf("并联后的阻值为：%.2f", r);
	return 0;
} 
