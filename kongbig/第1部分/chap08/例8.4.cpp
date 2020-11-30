/*
双重指针运用举例 
*/
#include<cstdio>
using namespace std;
int a = 10;
int *p;
// 定义双重指针 
int * *pp; 
int main()
{
	// 将p指向a
	p = &a;
	// 将pp指向p
	pp = &p;
	// * *p通过2次，间接访问了a的变量的值10 
	printf("%d = %d = %d\n", a, *p, **pp);
	return 0;
}
