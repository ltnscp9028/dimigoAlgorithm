#include<bits/stdc++.h>
using namespace std;
queue<pair<int,int> >q;
priority_queue<int>pq;
int cnt,i,answer = 1,location,n;
vector<int> p;
void solution(){
    for(i=0;i<p.size(); pq.push(p[i++]))q.push({p[i],i});
    for(;;){
        if(q.front().first==pq.top()){
            if(q.front().second==location)return;
            q.pop();
            pq.pop();
            answer++;
        }
        else{
            q.push(q.front());
            q.pop();
        }
    }
}

main(){
	cin>>n>>location;
	for(p.resize(n);i<n;i++)cin>>p[i];
	solution();
	cout<<answer;
}