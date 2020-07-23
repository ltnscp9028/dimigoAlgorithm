#include<bits/stdc++.h>
using namespace std;
int i,n;

int main(){
	cin>>n;
	vector<int>v(n);
	for(;i<n;i++)cin>>v[i];
	sort(v.begin(),v.end());
	for(i=0;i<n-1;i++)
		if(v[i]+1!=v[i+1]){
			puts("NO");
			return 0;
		}
	puts("YES");
}

	