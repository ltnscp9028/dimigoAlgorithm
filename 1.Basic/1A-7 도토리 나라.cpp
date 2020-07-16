#include <bits/stdc++.h>
using namespace std;
vector<int>v[13];
int i,n,k[100001],t;
int main(){
	for(cin>>n;i<n;i++)cin>>k[i];
	for(i=0;i<n;v[t].push_back(k[i++]))cin>>t;
	cin>>n;
	sort(v[n].begin(),v[n].end(),greater<int>());
	cout<<(v[n].size()?v[n][0]:-1);
}