/*
����������ֵ 
*/
#include<iostream>
using namespace std;
int main()
{
	int x = 7, y = 8;
	// �൱�ڣ�y - x ��x++������z1 = 8 -7 = 1��x++��x = 8 
	int z1 = y - (x++);
	// �൱�ڣ���x��������++x��x=9������z2 = 8 - 9 = -1 
	int z2 = y - (++x);
	cout<<"z1 = "<<z1<<"   z2 = "<<z2<<endl;
} 
