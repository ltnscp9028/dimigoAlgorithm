#include <bits/stdc++.h>
using namespace std;
int arr[15][15],a,b,i,j;
int main() {
	cin>>a>>b;
	for(i=1;i<15;i++)arr[0][i]=i;
	for(i=1;i<15;i++)
		for(arr[i][0]=arr[i-1][0],j=1;j<15;j++)arr[i][j]=arr[i][j-1]+arr[i-1][j];
	cout<<arr[a][b];
}