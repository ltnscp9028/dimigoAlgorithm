#include<bits/stdc++.h>
using namespace std;
stack<char>s;
string arr;
int i,res;
main(){
    for(cin>>arr;i<arr.size();i++){
        if(arr[i]=='(')s.push('(');
        else{
            s.pop();
            if(arr[i-1]=='(')res+=s.size();
            else res++;
        }
    }
    cout<<res;
}