// su dung thuat toan dfs
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
int color[1005];
void nhap(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		ke[x].pb(y);
		//ke[y].pb(x);
	}
}
bool dfs(int u){
	color[u]=1;
	for(int v:ke[u]){
		if(color[v]==1){
		   return true;
		}
		else if(!color[v]){
			if(dfs(v)){
				return true;
			}
		}
	}
	color[u]=2;
	return false;
}
int main(){
	faster();
	nhap();
	for(int i=1;i<=n;i++){
		if(!color[i]){
			if(dfs(i)){//duyet tat ca cac dinh trong do thi va kiem tra
				cout<<1;
				return 0;
			}
		}
	}
	cout<<"0";
	return 0;
}