#include<bits/stdc++.h>
using namespace std;
int n,mx,arr[999];
main(){
	for(cin>>n;~scanf("%d",&n);mx= arr[n] > arr[mx] ? n : mx)arr[n]++;
	cout<<mx;
}