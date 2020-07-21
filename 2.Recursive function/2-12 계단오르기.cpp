#include<bits/stdc++.h>
using namespace std;
int n,dp[100001]={1, 1, 2};
int rec(int a){
	if(a==1) return 1;
	if(dp[a]) return dp[a];
	else return dp[a] = (rec(a-3) + rec(a-2) + rec(a-1))%1000;
}

int main(){
	cin>>n;
	cout<<rec(n);
}