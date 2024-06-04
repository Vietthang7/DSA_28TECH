#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
// cay khung cuc tieu do thi vo huong
int mod=1e9+7;
struct canh{
	int x,y,w;
};
int n,m;
int parent[1005];
int sz[1005];
vector<canh> dscanh;
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
bool Union(int u,int v){
	u=Find(u);
	v=Find(v);
	if(u!=v){
		if(sz[u]>sz[v]){
			parent[v]=u;
			sz[u]+=sz[v];
		}
		else{
			parent[u]=v;
			sz[v]+=sz[u];
		}
        return true;
	}
	else{
		return false;
	}
}
void Kruskal(){
	// B1 sap xep danh sach canh theo trong so tang dan
	sort(dscanh.begin(),dscanh.end(),[](canh a, canh b)-> bool{
		 return a.w<b.w;
	});
	int total=0;
	vector<canh> MST;
	for(int i=0;i<m;i++){
		if(MST.size()==n-1){
			break;
		}
		canh e=dscanh[i];
		if(Union(e.x,e.y)){
			MST.push_back(e);
			total+=e.w;
		}
	}
	if(MST.size()<n-1){
		cout<<"Do thi khong lien thong"<<endl;
	}
	else{
        cout<<total<<endl;
        for(canh e : MST){
        	cout<<e.x<<" "<<e.y<<" "<<e.w<<endl;
        }
	}
}
int main(){
	faster();
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y,w;
		cin>>x>>y>>w;
		dscanh.pb({x,y,w});
	}
	init();
	Kruskal();
}