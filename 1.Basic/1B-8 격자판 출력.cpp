#include<bits/stdc++.h>
using namespace std;
int arr[21][21],i,j,n;
int main(){
	for(scanf("%d",&n);~scanf("%d",&arr[i][0]);i++);
	for(i=1;i<n;i++)
		for(j=1;j<=i;j++)arr[i][j]=arr[i][j-1]-arr[i-1][j-1];
	for(i=0;i<n;puts(""),i++)
		for(j=0;j<=i;j++)cout<<arr[i][j]<<' ';
}