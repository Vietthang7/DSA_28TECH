#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
int n,m,s;
typedef pair<int,int> ii;
vector<ii> ke[1005];//first luu dinh con second la luu kc
void nhap(){
	cin>>n>>m>>s;
	for(int i=0;i<m;i++){
		int x,y,w;
		cin>>x>>y>>w;
		ke[x].pb({y,w});
		ke[y].pb({x,w});
	}
}
void Dijkstra(int s){
	vector<int> d(n+1,1e9);
	d[s]=0;
	priority_queue<ii,vector<ii>,greater<ii>> q;
	q.push({0,s});// first la luu kc , second luu dinh
	while(!q.empty()){
		ii e=q.top();
		q.pop();
		int kc=e.first;
		int y=e.second;
		if(kc>d[y]){
			continue;
		}
		for(ii x:ke[y]){
			int p=x.first;
			int l=x.second;
			if(d[p]>d[y]+l){
              d[p]=d[y]+l;
              q.push({d[p],p});
			}
		}
	}
	for(int i=1;i<=n;i++){
		cout<<d[i]<<" ";
	}

}
int mod=1e9+7;
int main(){
	faster();
	nhap();
	Dijkstra(s);
}