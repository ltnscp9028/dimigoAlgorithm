#import<iostream>
using namespace std;
main(){
	int n,i=1,x;
	for(cin>>n,x=n;n!=(x=(x/10+x)%10+x%10*10);i++);
	cout<<i;
}