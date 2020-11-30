/*
6名评委给一位参赛者打分，
6个人打分的平均分为9.6，
如果去掉一个最高分，平均分为9.4，
如果去掉一个最低分，平均分为9.8，

求去掉一个最高分和一个最低分，平均分是多少？

分析：
总分：9.6 * 6 = 57.6
去掉最高分的5人打分：9.4 * 5 = 47
去掉最低分的5人打分：9.8 * 5 = 49

最高分：57.6 - 47 = 10.6
最低分：57.6 - 49 =  8.6

4人平均分 = (57.6 - 10.6 - 8.6) / 4
*/
#include<iostream>
using namespace std;
int main() {
	// 6名评委总分 
	float sc_all = 6 * 9.6;
	// 去掉最高分后的总分 
	float sc_high = 5 * 9.4;
	// 去掉最低分后的总分 
	float sc_low = 5 * 9.8;
	// 最高分 
	float high = sc_all - sc_high;
	// 最低分 
	float low = sc_all - sc_low;
	// 去掉最高分、最低分后的平均分 
	float ans = (sc_all - high - low) / 4;
	printf("%5.2f\n", ans);
}
