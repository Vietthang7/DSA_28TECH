#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
// thuat toan tim kiem theo chieu sau.
int mod=1e9+7;
int n,m,s;
vector<int> adj[1005];
int visited[1005];
void nhap(){
	cin>>n>>m>>s;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
}
void dfs(int u){
	cout<<u<<" ";
	visited[u]=true;
	sort(adj[u].begin(),adj[u].end());
	for(int v:adj[u]){
		if(!visited[v]){
			dfs(v);
		}
	}
}
int main(){
	faster();
	nhap();
	dfs(s);
}