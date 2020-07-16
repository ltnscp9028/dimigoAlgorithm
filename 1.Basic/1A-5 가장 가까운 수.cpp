#include<bits/stdc++.h>
using namespace std;
int n,i,res,arr[10001];
float s;
vector<pair<float,int>>v;
int main(){
	for(cin>>n;i<n;s+=arr[i++])cin>>arr[i];
	for(i=0,s/=n;i<n;i++)v.push_back({fabs(s-arr[i]),i});
	sort(v.begin(),v.end());
	printf("%d %d",v[0].second+1,arr[v[0].second]);
}