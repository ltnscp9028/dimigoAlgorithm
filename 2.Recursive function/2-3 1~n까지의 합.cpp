#include<bits/stdc++.h>
using namespace std;
int n,s;
void rec(int i){
	s+=i;
	if(i==n)return;
	rec(i+1);
}

int main(){
	cin>>n;
	rec(1);
	cout<<s;
}