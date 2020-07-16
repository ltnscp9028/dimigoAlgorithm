#include<bits/stdc++.h>
using namespace std;
int a,b,c,i,n,m,mi=109,midx,mx,arr[1010],chk[110];
vector<int>v;
int main(){
	chk[109]=9876;
	for(cin>>n>>m;m--;){
		cin>>a>>b>>c;
		for(i=a;i<=b;i++)arr[i]=c;
	}
	for(i=1;i<=n;i++)
		chk[arr[i]]++;

	for(i=0;i<100;i++)if(chk[i]){
		mx = chk[mx]<chk[i]?i:chk[mx]==chk[i]?mx>i?i:mx:mx;
		mi = chk[mi]>chk[i]?i:chk[mi]==chk[i]?mi>i?i:mi:mi;
	}		
	cout<<mx<<'\n'<<mi;
}