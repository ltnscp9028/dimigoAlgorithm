#include<bits/stdc++.h>
using namespace std;
int n,p,q,s,cnt;
int main(){
	for(cin>>n>>p>>q;~scanf("%d",&n);)n<=p?s+=n,cnt++:0;
	printf("%d %d\n%s",cnt,s,s>q?"NO":"YES");
}