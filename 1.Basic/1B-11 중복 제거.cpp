#include<bits/stdc++.h>
using namespace std;
int n,arr[100001];
int main(){
	for(cin>>n;~scanf("%d",&n);)arr[n]++;
	for(n=0;n<100001;n++)arr[n]?printf("%d ",n):0;
}