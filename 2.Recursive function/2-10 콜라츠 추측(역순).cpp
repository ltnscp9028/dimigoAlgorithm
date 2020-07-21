#include<bits/stdc++.h>
using namespace std;
int n;
void rec(int i){
	if(i==1)return;
	rec(i%2?i*3+1:i/2);
	cout<<i<<'\n';
}

int main(){
	cin>>n;
	cout<<1<<'\n';
	rec(n);
}