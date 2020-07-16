#include<bits/stdc++.h>
using namespace std;
int n,i;
int main(){
	cin>>n;
	vector<int>v(n);
	for(;i<n;i++)cin>>v[i];
	auto vv = v;
	sort(v.begin(),v.end());
	for(i=0;i<n;i++)if(v[i]!=vv[i])break;
	puts(i^n?"NO":"YES");
}