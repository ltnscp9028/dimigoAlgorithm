#include<bits/stdc++.h>
using namespace std;
int n,i,j,idx1,idx2,cnt;
pair<int,int>p[1001];
float mx=2100000000.0,tmp,arr;
int main(){
   for(cin>>n;i<n;i++){
      scanf("%d %d",&p[i].first,&p[i].second);
   }
   
   for(i=0;i<n;i++){
      for(j=i;j<n;j++){
         tmp = sqrt(pow(p[i].first-p[j].first,2)+pow(p[i].second-p[j].second,2));
				if(tmp==0)continue;
				if(tmp<mx){
					 mx = tmp;
					 cnt = 1;
				 }
				else if(tmp==mx){
					cnt++;
				}
      }
   }
   
   printf("%.1f\n%d",mx,cnt);
}