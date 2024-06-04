#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
int n,m;
int parent[1005];
int sz[1005];
int size_max=-1;
void init(){
	for(int i=1;i<=n;i++){
		parent[i]=i;
		sz[i]=1;
	}
}
int Find(int u){
	if(u==parent[u]){
		return u;
	}
	else{
		return parent[u]=Find(parent[u]);
	}

}
bool Union(int x,int y){
	x=Find(x);
	y=Find(y);
	if(x!=y){
		if(sz[x]>sz[y]){
          parent[y]=x;
          sz[x]+=sz[y];
		}
		else{
			parent[x]=y;
			sz[y]+=sz[x];
		}
		size_max=max({size_max,sz[x],sz[y]});
		return true;
	}
	
		return false;
	
}
int mod=1e9+7;
int main(){
	faster();
	cin>>n>>m;
	init();
	int cnt=n;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		if(Union(x,y)){
			cnt--;
		}
		cout<<cnt<<" "<<size_max<<endl;
	}
}