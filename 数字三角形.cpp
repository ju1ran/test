/*
输入一个下三角矩阵，求一条路径使得从第一行到第n行的加和最小
n<=100 and >1
*/
#include<iostream>
#include<algorithm>
using namespace std;
const int MAX=100+5;
int map[MAX][MAX];
int maxsum[MAX][MAX];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=i;j++)
			cin>>map[i][j];
	for(int i=1;i<=n;i++)
		maxsum[n][i]=map[n][i];
	for(int i=n-1;i>=1;i--)
		for(int j=1;j<=i;j++)
			maxsum[i][j]=max(maxsum[i+1][j],maxsum[i+1][j+1])+map[i][j];
	cout<<maxsum[1][1];
	return 0;
 } 
