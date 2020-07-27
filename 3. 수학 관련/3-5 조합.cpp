#include <bits/stdc++.h>
using namespace std;
int n,k,i;
vector<int>v,vv;
int main() {
	for(cin>>n>>k,v.resize(n);i<n;i++)cin>>v[i];
	for(i=0;i<k;i++)vv.push_back(1);
	for(i=0;i<n-k;i++)vv.push_back(0);
	sort(vv.begin(),vv.end());
	i=0;
	do{
		i++;
	}while(next_permutation(vv.begin(),vv.end()));
	cout<<i;
}