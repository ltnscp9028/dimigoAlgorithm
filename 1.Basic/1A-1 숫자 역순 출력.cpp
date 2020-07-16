#include<bits/stdc++.h>
using namespace std;
stack<int>s;
int n;
int main(){
	for(cin>>n;~scanf("%d",&n);s.push(n));
	for(;!s.empty();s.pop())cout<<s.top()<<' ';
}
