/*
例1.2 已知梯形上、下底长为15和25。设梯形的高为h；
则已知三角形面积为150平方厘米，
三角形面积 = 底 * 高 / 2；
150 = (15 * h) / 2	得h = 20
梯形面积 = (上底 + 下底) * h / 2 
*/ 
#include<cstdio>			// printf和scanf调用cstdio库，在C语言中可调用stdio.h库 
#include<cstdlib>			// 使用system()调用cstdlib库 
using namespace std;		// 使用标准命名空间 
int main()
{
	float s,h,up,down;		// float定义单精度实型变量 
	up=15;
	down=25;
	h=2*150/up;				// 三角形面积 = 底 * 高 / 2 
	s=(up+down)*h/2;		// 梯形面积 = (上底 + 下底) * 高 / 2 
	printf("s=%0.2f\n", s);	// 保留两位小数 
	system(" pause ");
	return 0;
}
