/*
输入：# 
输出：
  # 
 ### 
##### 
*/
#include<iostream>
using namespace std;
int main()
{
	printf("请输入任意字符：");
	char c;
	cin>>c;
	cout<<"  "<<c<<endl;
	cout<<" "<<c<<c<<c<<endl;
	cout<<c<<c<<c<<c<<c<<endl;
	return 0;	
} 
