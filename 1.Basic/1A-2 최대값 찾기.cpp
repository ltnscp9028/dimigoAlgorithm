#include<bits/stdc++.h>
using namespace std;
int n,res=-9876543211;
int main(){
	for(cin>>n;~scanf("%d",&n);res=max(res,n));
	cout<<res;
}