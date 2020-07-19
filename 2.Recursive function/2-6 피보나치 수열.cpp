#include<bits/stdc++.h>
int n;
int fibo(int i){
	if(i==0||i==1)return i;
	return fibo(i-1)+fibo(i-2);
}

int main(){
	std::cin>>n;
	std::cout<<fibo(n);
}