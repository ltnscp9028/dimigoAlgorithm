#include<bits/stdc++.h>
using namespace std;
int f,s,k,res,i;main(){
	cin>>f>>s>>k;
	for(res=s-f;k>f+res*i;i++)
		cout<<(f+res*i)<<' ';
}