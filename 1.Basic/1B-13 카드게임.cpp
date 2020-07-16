#include<bits/stdc++.h>
using namespace std;
int n,m,t,i,j,k,idx,arr[100001];
long long temp,mx=-987654321;
int main(){
	for(cin>>n>>m;++i<=n;)scanf("%d",arr+i);
	for(;++k<=m;temp = 0){
		cin>>n>>j;
		for(i=n;i<=j;i++)temp+=arr[i];
		mx<temp?mx=temp,idx=k:0;
	}
	cout<<idx<<' '<<mx;
}