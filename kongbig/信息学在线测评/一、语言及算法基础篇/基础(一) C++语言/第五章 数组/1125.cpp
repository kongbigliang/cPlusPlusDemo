#include<iostream>
using namespace std;
int main() 
{
	int n,m,k;
	int a[100][100],b[100][100],c[100][100]= {0};
	cin >> n >> m >> k;
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			cin >> a[i][j];//����A
		}
	}
	for(int i=0; i<m; i++) {
		for(int j=0; j<k; j++) {
			cin >> b[i][j];//����B
		}
	}
	for(int i=0; i<n; i++) {
		for(int j=0; j<k; j++) {
			for(int z=0; z<m; z++) {
				c[i][j]+=a[i][z]*b[z][j];//����C(i,j)����A��i�е�Ԫ����B�ĵ�j�е�Ԫ�ض�Ӧ�˻����ۼƳ˻�֮��
			}
			cout << c[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
