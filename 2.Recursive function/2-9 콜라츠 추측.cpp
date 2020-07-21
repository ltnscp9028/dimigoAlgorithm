#include<bits/stdc++.h>
using namespace std;
int n;
void rec(int i){
	cout<<i<<'\n';
	if(i==1)return;
	rec(i%2?i*3+1:i/2);
}

int main(){
	cin>>n;
	rec(n);
}