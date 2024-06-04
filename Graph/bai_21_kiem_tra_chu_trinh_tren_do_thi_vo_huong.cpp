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
vector<int> ke[1005];
int visited[1005];
int parent[1005];
void nhap(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		ke[x].pb(y);
		ke[y].pb(x);
	}
}
bool dfs(int u){
	visited[u]=1;
	for(int v:ke[u]){
		if(visited[v]){
			if(v!=parent[u]){// 
				return true;
			}
		}
		else if(!visited[v]){
			parent[v]=u;
			if(dfs(v)){
				return true;
			}
		}
	}
	return false;
}
// bool bfs(int u){
// 	queue<int> q;
// 	q.push(u);
// 	visited[u]=1;
// 	while(!q.empty()){
// 		int x=q.front();
// 		q.pop();
// 		for(int v:ke[x]){
// 			if(visited[v] && v!=parent[x]){
// 				return true;
// 			}
// 			else if(!visited[v]) {
//                q.push(v);
//                parent[v]=x;
//                visited[v]=1;
// 			}
// 		}
// 	}
// 	return false;
// }
int main(){
	faster();
	nhap();
	for(int i=1;i<=n;i++){
		if(!visited[i]){
			if(dfs(i)){// dfs deu dc
				cout<<1;
				return 0;
			}
		}
	}
	cout<<"0";
	return 0;
}