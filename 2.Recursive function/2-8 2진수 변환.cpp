#include<bits/stdc++.h>
using namespace std;
int n;
void rec(int i){
        if(i<1) return;
        rec(i/2); 
        printf("%d", i%2);
}

int main(){
        cin>>n;
        rec(n);
}
