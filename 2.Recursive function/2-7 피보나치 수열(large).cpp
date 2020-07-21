#include<bits/stdc++.h>
using namespace std;
int n;
long long i,dp[201]={0,1};
long long rec(int n) {
	if (dp[n]|| n<=1) return dp[n];
	return dp[n] = (rec(n - 1) + rec(n - 2))%10009;
}

int main(){
	cin>>n;
	cout<<rec(n);
}