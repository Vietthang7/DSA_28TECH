#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
// trong cay dfs va bfs parent nhu nhau
int n;
vector<int> ke[1005];
int height[1005];
void nhap(){
	cin>>n;
	for(int i=0;i<n-1;i++){
		int x,y;
		cin>>x>>y;
		ke[x].push_back(y);
	}
}
void dfs(int u){
	for(int v:ke[u]){
		height[v]=height[u]+1;
		dfs(v);
	}
}
int mod=1e9+7;
int main(){
	faster();
	nhap();
	height[1]=0;
	dfs(1);
	for(int i=1;i<=n;i++){
		cout<<height[i]<<" ";
	}
}