#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
//chi ap dung cho do thi co huong va khong co chu trinh , dinh nao duyet xong dau tien theo thuat toan dfs thi nam o cuoi day
int mod=1e9+7;
int n,m;
vector<int> adj[1005];
int visited[1005];
stack<int> st;
void nhap(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		adj[x].pb(y);
	}
	memset(visited,0,sizeof(visited));
}
void dfs(int u){
	visited[u]=1;
	for(int v:adj[u]){
		if(!visited[v]){
			dfs(v);
		}
	}
	st.push(u);
}
int main(){
	faster();
	nhap();
	for(int i=1;i<=n;i++){
		if(!visited[i]){
			dfs(i);
		}
	}
	while(!st.empty()){
		cout<<st.top<<" ";
		st.pop();
	}
}