#include<iostream>
using namespace std;
int main() 
{
	int n,m,k;
	int a[100][100],b[100][100],c[100][100]= {0};
	cin >> n >> m >> k;
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			cin >> a[i][j];//矩阵A
		}
	}
	for(int i=0; i<m; i++) {
		for(int j=0; j<k; j++) {
			cin >> b[i][j];//矩阵B
		}
	}
	for(int i=0; i<n; i++) {
		for(int j=0; j<k; j++) {
			for(int z=0; z<m; z++) {
				c[i][j]+=a[i][z]*b[z][j];//矩阵C(i,j)等于A的i行的元素与B的第j列的元素对应乘积再累计乘积之和
			}
			cout << c[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
