#include<bits/stdc++.h>
using namespace std;
int a,b,i;
int main(){
	for(cin>>i;~scanf("%d",&i);)
		i&1 ? a=max(a,i) : b=max(b,i);
	cout<<a+b;
}