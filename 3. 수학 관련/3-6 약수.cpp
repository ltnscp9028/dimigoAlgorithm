#include <bits/stdc++.h>
using namespace std;
int n,k,i;
vector<int>v;
set<int>s;
int main(){
	cin>>n>>k;
	for(i=1;i*i<n;i++){
		if(n%i==0){
			s.insert(i);
			s.insert(n/i);
		}
    if(i*i==n)
        s.insert(i);
	}
	for(i=1;i*i<k;i++){
		if(k%i==0){
			s.insert(i);
			s.insert(k/i);
		}
    if(i*i==k)
        s.insert(i);
	}
	
	v.assign(s.begin(),s.end());
	for(i=0;i<v.size();i++)printf("%d ",v[i]);
}