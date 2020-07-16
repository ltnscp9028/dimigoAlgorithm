#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int n,m,s,i;
int main(){
	for(cin>>n>>m>>s,v.resize(n);i<n;i++)cin>>v[i];
	auto c = find(v.begin(),v.end(),m)-v.begin();
	auto d = find(v.begin(),v.end(),s)-v.begin();
	printf("%d",c==n||d==n?0:max(c,d));
}