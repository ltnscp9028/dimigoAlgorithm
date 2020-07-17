#include<bits/stdc++.h>
using namespace std;
int n;
void rec(int a){
	cout<<a<<'\n';
	if(a==n)return;
	rec(a+1);
}
int main(){
	cin>>n;
	rec(1);
}