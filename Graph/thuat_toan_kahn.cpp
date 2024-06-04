#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
//to po bfs: chi ap dung cho do thi co huong khong co chu trinh
int mod=1e9+7;
int n,m;
vector<int> adj[1005];
int degree[1005];
void nhap(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		 degree [i] = 0;
	}
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		adj[x].pb(y);
		degree[y]++;
	}

}
void Kahn(){
	queue<int> q;
	for(int i=1;i<=n;i++){
		if(degree[i]==0){
			q.push(i);
		}
	}
	vector<int> topo;
	while(!q.empty()){
       int u=q.front();
       q.pop();
       topo.pb(u);
       for(int v:adj[u]){
       	degree[v]--;
       	if(degree[v]==0){
       		q.push(v);
       	}
       }
	}
	if(topo.size()<n){
		cout<<"Do thi co chu trinh";
	}
	else{
		for(int x:topo){
			cout<<x<<" ";
		}
	}
}
int main(){
	faster();
	nhap();
	Kahn();
}