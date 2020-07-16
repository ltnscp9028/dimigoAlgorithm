#include<bits/stdc++.h>
using namespace std;
int s,n,dp[2001],i=2;
int main(){
	dp[1]=1;
	scanf("%d",&n);
	for(i=2;i<=2000;i++)dp[i]=dp[i-1]+i;
	for(i=1;i<=n;i++)s+=dp[i];
	cout<<s;
}
