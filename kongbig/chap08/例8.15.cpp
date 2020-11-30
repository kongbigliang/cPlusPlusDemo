/*
约瑟夫环问题 
*/
#include<iostream>
using namespace std;
struct node
{
	long d;
	node *next;	
};
long n, m;
node * head, * p, * r;
int main()
{
	long i, j, k, l;
	cin>>n>>m;
	head = new node;
	head->d = 1;
	head->next = NULL;
	r = head;
	for (i = 2; i <= n; i++)
	{
		p = new node;
		// 报数 
		p->d = i;
		p->next = NULL;
		r->next = p;
		r = p;
	}
	// 首尾相接 
	r->next = head; 
	r = head;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m - 2; j++)
			r = r->next;
		cout<<r->next->d<<" ";
		// 连接下两个元素 
		r->next = r->next->next;
		r = r->next;
	}
	return 0; 
}
