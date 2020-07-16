#include<bits/stdc++.h>
using namespace std;
long long n,s,i,j,h;
int main() {
	cin>>n;
	for(j=n;i<=n;s+=h,i++)
		for(h=0;j>=0;j--)
			if(i*i+j*j<n*n){
				h=j+1;
				break;
			}
	cout<<s*4;
}