#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
// VO HUONG
// DEM THANH PHAN LIEN THONG
// doan code toi uu dsu
int mod=1e9+7;
int n,m;
int parent[1005];// luu dai dien cua tung dinh
int sz[1005];

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
		return parent[u]=Find(parent[u]);// toi uu nen duong
	}
}
bool Union(int x,int y){
	x=Find(x);
	y=Find(y);
	if(x!=y){
		if(sz[x]>sz[y]){// toi uu size
			parent[y]=x;
			sz[x]+=sz[y];
		}
		else{
			parent[x]=y;
			sz[y]+=sz[x];
		}
		return true;
	}
	else{
		return false;
	}
}
int main(){
	faster();
	cin>>n>>m;
	init();
	int ans=n;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		ans-=(Union(x,y)==true);
	}
	// int dem=0;
	// for(int i=1;i<=n;i++){
	// 	if(i==parent[i]){
	// 		++dem;
	// 	}
	// }
	// cout<<dem<<endl;
	cout<<ans;
}