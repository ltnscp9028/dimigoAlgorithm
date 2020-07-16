#include <bits/stdc++.h>
using namespace std;
int n,k,i,s,c;
vector<int>v,vv;
int main() {
	for(cin>>n>>k,v.resize(n);i<n;i++)cin>>v[i];
	for(i=0;i<k;i++)vv.push_back(1);
	for(i=0;i<n-k;i++)vv.push_back(0);
	sort(vv.begin(),vv.end());
	do{
		c=s=0;
		vector<int>chk;
		for(i=0;i<n;i++){
			if(vv[i]==1){
				s+=v[i];
				chk.push_back(i);
			}
		}
		for(i=0;i<chk.size()-1;i++)if(chk[i]+1!=chk[i+1])c++;
		if(!c)
			if(!(s&i)){
				puts("YES");
				return 0;
			}
		
	}while(next_permutation(vv.begin(),vv.end()));
	puts("NO");
}