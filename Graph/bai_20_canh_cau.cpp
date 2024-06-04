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
vector<pair<int,int>> dscanh;
void nhap(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		adj[x].pb(y);
		adj[y].pb(x);
		dscanh.push_back({x,y});
	}
// 	for(int i=1;i<=n;i++){
// 		sort(adj[i].begin(),adj[i].end());
// 	}
}
void dfs(int u,int x,int y){
	visited[u]=1;
	for(int v:adj[u]){
		if(v==x && u==y || v==y && u==x){
			continue;
		}
		if(!visited[v]){
			dfs(v,x,y);
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
			dfs(i,-1,-1);
		}
	}
	int cau=0;
	for(auto it : dscanh){
		int x=it.first;
		int y=it.second;
		memset(visited,0,sizeof(visited));
		int dem=0;
		for(int j=1;j<=n;j++){
			if(!visited[j]){
                ++dem;
                dfs(j,x,y);
			}
		}
		if(dem>ans){
			++cau;
		}
		
	}
	cout<<cau<<endl;
}
// #include<bits/stdc++.h>
// using namespace std;

// using ll=long long;
// #define pb push_back
// #define sz size()
// #define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
// #define vi vector<int>
// #define vll vector<ll>

// int mod=1e9+7;
// int n,m;
// set<int> adj[1005];
// int visited[1005];
// vector<pair<int,int>> dscanh;
// void nhap(){
// 	cin>>n>>m;
// 	for(int i=0;i<m;i++){
// 		int x,y;
// 		cin>>x>>y;
// 		adj[x].insert(y);
// 		adj[y].insert(x);
// 		dscanh.push_back({x,y});
// 	}
// // 	for(int i=1;i<=n;i++){
// // 		sort(adj[i].begin(),adj[i].end());
// // 	}
// }
// void dfs(int u){
// 	visited[u]=1;
// 	for(int x:adj[u]){
// 		if(!visited[x]){
// 			dfs(x);
// 		}
// 	}
// }
// int main(){
// 	faster();
// 	nhap();
// 	int ans=0;
// 	for(int i=1;i<=n;i++){
// 		if(!visited[i]){
// 			++ans;
// 			dfs(i);
// 		}
// 	}
// 	int cau=0;
// 	for(auto it : dscanh){
// 		int x=it.first;
// 		int y=it.second;
// 		memset(visited,0,sizeof(visited));
// 		adj[x].erase(y);
// 		adj[y].erase(x);
// 		int dem=0;
// 		for(int j=1;j<=n;j++){
// 			if(!visited[j]){
//                 ++dem;
//                 dfs(j);
// 			}
// 		}
// 		if(dem>ans){
// 			++cau;
// 		}
// 		adj[x].insert(y);
// 		adj[y].insert(x);
// 	}
// 	cout<<cau<<endl;
// }