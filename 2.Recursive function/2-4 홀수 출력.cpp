#include<bits/stdc++.h>
using namespace std;
int n,m;
void rec(int i){
	if(i&1)cout<<i<<' ';
	if(i==m)return;
	rec(i+1);
}

int main(){
	cin>>n>>m;
	rec(n);
}