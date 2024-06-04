#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int mod=1e9+7;
int n,m;
vector<int> adj[1005];
int visited[1005];
int dem;
void nhap(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	for(int i=1;i<=n;i++){
		sort(adj[i].begin(),adj[i].end());
	}
}
void dfs(int u){
	visited[u]=1;
	for(int x:adj[u]){
		if(!visited[x]){
			dfs(x);
		}
	}
}
int main(){
	faster();
	nhap();
	int ans=0;
	for(int i=1;i<=n;i++){
		if(!visited[i]){
			++ans;
			dfs(i);
		}
	}
	int tru=0;
	for(int i=1;i<=n;i++){
		memset(visited,0,sizeof(visited));
		visited[i]=1;
		int dem=0;
		for(int j=1;j<=n;j++){
			if(!visited[j]){
				++dem;
				dfs(j);
			}
		}
		if(dem>ans){
			++tru;
		}
	}
	cout<<tru<<endl;
}