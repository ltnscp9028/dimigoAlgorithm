#include<bits/stdc++.h>
using namespace std;
int arr[10001];
vector<string>s;
int n,i,m=-1;
int main(){
	for(cin>>n;~scanf("%d",&i);)arr[i]++;
	for(i=0;i<10000;i++){
		if(m==arr[i])s.push_back(to_string(i));
		if(m<arr[i]){
			m=arr[i];
			s.clear();
			s.push_back(to_string(i));
		}
	}

	cout<<s[0];
}