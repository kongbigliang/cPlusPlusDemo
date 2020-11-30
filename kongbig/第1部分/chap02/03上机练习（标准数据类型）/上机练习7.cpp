/*
整型与布尔型的转换 
*/
#include<iostream>
using namespace std;
int main()
{
	int i = 1;
	bool b = true;
	cout<<"int型转布尔型："<<boolalpha<<(bool) i<<endl; 
	cout<<"布尔型转int型："<<(int) b<<endl; 
//	printf("int型转布尔型：%d\n", (bool) i);
//	printf("布尔型转int型：%d", (int) b);
	return 0;
}
