#include <iostream>
using namespace std; 
int main() 
{
    int m,n;
    int a[101][101];
    int i,j;
    
    cin>>m>>n;//�����������������
    
    for(i=1;i<=m;i++)//�������
        for(j=1;j<=n;j++)
            cin>>a[i][j];
    
    for(i=1;i<=n;i++)//���ת����ľ���
    {
        for(j=1;j<=m;j++)
            cout<<a[j][i]<<" ";
		cout<<endl;
    }
    return 0;
}
