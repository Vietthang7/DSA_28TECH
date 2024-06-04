#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
// thuat toan tarjan
int mod=1e9+7;
int n,m;
vector<int> ke[1005];
int visited[1005];
int timer=0;
int disc[1005];
int low[1005];
vector<pair<int,int>> canh_cau;
void nhap(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		ke[x].pb(y);
		ke[y].pb(x);
	}
	memset(visited,0,sizeof(visited));
	//memset(AP,0,sizeof(AP));
}
void dfs(int u,int parent){
	visited[u]=1;
	disc[u]=low[u]=++timer;
	int dem=0;
	for(int v:ke[u]){
		if(v==parent){
			continue;
		}
		if(!visited[v]){
           ++dem;
           dfs(v,u);
           low[u]=min(low[u],low[v]);
           if(low[v]>disc[u]){
           	  canh_cau.push_back({u,v});
           }
		}
		else{
			low[u]=min(low[u],disc[v]);
		}
	}

}
int main(){
	faster();
	nhap();
	for(int i=1;i<=n;i++){
		if(!visited[i]){
			dfs(i,-1);
		}
	}
	cout<<canh_cau.size()<<endl;
}