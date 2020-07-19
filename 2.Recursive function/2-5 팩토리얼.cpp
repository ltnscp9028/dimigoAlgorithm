#include<bits/stdc++.h>
using namespace std;
int n,s=1;
void rec(int i){
	s*=i;
	if(i==n){
		cout<<s;
		return;
	}
	rec(i+1);
}
int main(){
	cin>>n;
	rec(1);
}