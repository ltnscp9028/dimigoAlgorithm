#include<bits/stdc++.h>
using namespace std;
int n,i;
int main(){
	cin>>n;
	for(i=2;i<=sqrt(n);i++)
		if(n%i==0){
			puts("NO");
			return 0;
		}
	puts(n<2?"NO":"YES");
}