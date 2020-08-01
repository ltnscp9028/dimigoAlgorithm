#include<bits/stdc++.h>
using namespace std;
int i,k;
string s;
main(){
	for(cin>>s;k>=0&&i<s.length();k+=s[i++]==40?1:-1);
	puts(k?"bad":"good");
}