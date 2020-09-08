#include<cstdio>
using namespace std;
// PI 是常量符号，代表3.1415926 
const double PI = 3.1415926;
int main()
{
	float r, c, s;
	// 打印提示符 r =  
	printf("r = "); 
	// 输入r的值
	scanf("%f", &r);
	// 计算圆的周长 
	c = 2 * PI * r;
	// 计算圆的面积 
	s = PI * r * r;
	// 打印计算结果，保留两位小数 
	printf("c = %.2f\ts = %.2f\n", c, s);
}
