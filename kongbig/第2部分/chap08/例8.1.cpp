/*
广度优先 
*/
#include<iostream>
#include<cstring>
using namespace std;
int ju[9][9]={{0,0,0,0,0,0,0,0,0},
			{0,1,0,0,0,1,0,1,1},
            {0,0,1,1,1,1,0,1,1},
            {0,0,1,1,0,0,1,1,1},
            {0,0,1,0,1,1,1,0,1},
            {0,1,1,0,1,1,1,0,0},
            {0,0,0,1,1,1,1,1,0},
        	{0,1,1,1,0,0,1,1,0},
            {0,1,1,1,1,0,0,0,1}};
int a[101], b[101];
bool s[9];	//初始化
int out(int d)	//输出过程
{
	cout<<char(a[d] + 64);
	while (b[d])
	{
		d = b[d];
		cout<<"--"<<char(a[d] + 64);
	}
	cout<<endl;
}
void doit()
{
	int head, tail, i;
	head = 0, tail = 1;	// 队首为0、队尾为1
	a[1] = 1;			// 记录经过的城市
	b[1] = 0;			// 记录前趋城市
	s[1] = 1;			// 表示该城市已经到过
	do
	{
		head++;			// 队首加一，出队
		for (i = 1; i <= 8; i++)	// 搜索可直通的城市
			if ((ju[a[head]][i] == 0) && (s[i] == 0))	// 判断城市是否走过
			{
				tail++;	//队尾加一，入队
				a[tail] = i;
				b[tail] = head;
				s[i] = 1;
				if (i == 8)
				{
					// 第一次搜到H城市时路线最短
					out(tail);
					head = tail;
					break;
				}
			}
	} while (head < tail);
}
int main()
{
	// 将s重当前位置后面sizeof(s)个字节用0替换，并返回s；
	// false就是0 
	memset(s, false, sizeof(s));
	doit();
	return 0;
}
