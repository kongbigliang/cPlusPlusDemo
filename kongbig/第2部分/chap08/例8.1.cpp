/*
������� 
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
bool s[9];	//��ʼ��
int out(int d)	//�������
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
	head = 0, tail = 1;	// ����Ϊ0����βΪ1
	a[1] = 1;			// ��¼�����ĳ���
	b[1] = 0;			// ��¼ǰ������
	s[1] = 1;			// ��ʾ�ó����Ѿ�����
	do
	{
		head++;			// ���׼�һ������
		for (i = 1; i <= 8; i++)	// ������ֱͨ�ĳ���
			if ((ju[a[head]][i] == 0) && (s[i] == 0))	// �жϳ����Ƿ��߹�
			{
				tail++;	//��β��һ�����
				a[tail] = i;
				b[tail] = head;
				s[i] = 1;
				if (i == 8)
				{
					// ��һ���ѵ�H����ʱ·�����
					out(tail);
					head = tail;
					break;
				}
			}
	} while (head < tail);
}
int main()
{
	// ��s�ص�ǰλ�ú���sizeof(s)���ֽ���0�滻��������s��
	// false����0 
	memset(s, false, sizeof(s));
	doit();
	return 0;
}
