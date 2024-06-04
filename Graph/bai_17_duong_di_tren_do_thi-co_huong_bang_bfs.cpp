#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int mod=1e9+7;
int n,m,s,t;
vector<int> adj[1005];
int visited[1005];
int parent[1005];
void nhap(){
	cin>>n>>m>>s>>t;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
		//adj[y].push_back(x);
	}
	for(int i=1;i<=n;i++){
		sort(adj[i].begin(),adj[i].end());
	}
}
// void dfs(int u){
// 	visited[u]=1;
// 	for(int x: adj[u]){
// 		if(!visited[x]){
// 			parent[x]=u;
// 			dfs(x);
// 		}
// 	}
// }
void bfs(int u){
   queue<int> q;
   q.push(u);
   visited[u]=1;
   while(!q.empty()){
   	int x=q.front();
   	q.pop();
   	for(int v:adj[x]){
   		if(!visited[v]){
   			parent[v]=x;
   			q.push(v);
   			visited[v]=1;
   		}
   	}

   }
}
int main(){
	faster();
	nhap();
	bfs(s);
	if(!visited[t]){
		cout<<"-1"<<endl;
	}
	else{
		vector<int> res;
		while(t!=s){
			res.push_back(t);
			t=parent[t];
		}
		res.push_back(s);
		reverse(res.begin(),res.end());
		for(int x:res){
			cout<<x<<" ";
		}
	}
}