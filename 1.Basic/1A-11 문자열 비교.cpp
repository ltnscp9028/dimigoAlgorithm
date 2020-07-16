#include <bits/stdc++.h>
using namespace std;
string s,ss;
int i;
int main() {
	cin>>s>>ss;
		for(i=0;i<s.length();i++)
			if(s[i]!=ss[i]){
				puts(s[i]<ss[i]?"-1":"1");
				return 0;
			}
		puts("0");
}