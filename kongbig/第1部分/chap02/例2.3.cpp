/*
鸡兔同笼，已知头共30个，脚共90只，问笼中的鸡和兔有多少只？

设鸡为j只，兔为t只，头为h，脚为f，那么有：
j + t = 30
j * 2 + t * 4 = 90 

假设笼中30个头都是兔，兔有4个脚，那么总脚数为(4 * h) 
若(4 * h - f) = 0，则笼中全是兔（鸡 = 0）；
若(4 * h - f) > 0，则再除以2，就是鸡的只数。
算法为：
j = (4 * h - f) / 2		// 脚数差值除以2算出鸡的只数
t = h - j				// 总头数减鸡数，可算出兔的只数 
*/
#include<cstdio>			// 使用getchar()语句 
#include<iostream> 			// 使用cin，cout
using namespace std;
int main()
{
	int j, t, head = 30, foot = 90;
	// 鸡数； 
	j = (4 * head - foot) / 2;
	// 兔数； 
	t = head - j;
	cout<<"鸡="<<j<<"\t兔="<<t<<endl; 
	// 和system("pause")作用相似，用于显示暂停 
	getchar(); 
}











