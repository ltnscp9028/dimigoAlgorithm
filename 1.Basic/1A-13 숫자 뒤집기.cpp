#include<bits/stdc++.h>
using namespace std;
string v;
int n,s;
int main(){
	for(;~scanf("%1d",&n);v+=to_string(n))s+=n;
	reverse(v.begin(),v.end());
	cout<<stoi(v)<<'\n'<<s;
}