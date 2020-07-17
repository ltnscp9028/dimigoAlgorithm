#include<bits/stdc++.h>
using namespace std;
int n;
void rec(int a){
	cout<<a<<'\n';
	if(a==1)return;
	rec(a-1);
}
int main(){
	cin>>n;
	rec(n);
}