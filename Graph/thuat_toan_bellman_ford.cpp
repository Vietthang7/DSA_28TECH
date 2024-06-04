#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
// tim duong di ngan nhat tu mot dinh tuoi 1 dinh bat ki tren
// do thi ap dung ca co huong va vo huong
// canh co trong so am nhung chu trinh khong duoc am 
// co the check dc chu trinh am
// do phuc tap:O(V*E);
struct edge{
	int x,y,w;
};
int n,m;
vector<edge> dscanh;
int d[1005];// luu kc
void nhap(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y,w;
		cin>>x>>y>>w;
		dscanh.pb({x,y,w});
	}
}
void bellmanFord(int s){
	fill(d+1,d+n+1,1e9);
	d[s]=0;
	for(int i=1;i<=n-1;i++){
		for( edge e:dscanh){
			int u=e.x,v=e.y,w=e.w;
			if(d[u]<1e9){
				d[v]=min(d[v],d[u]+w);
			}
		}
	}
	for(int i=1;i<=n;i++){
		cout<<d[i]<<" ";
	}
}
int mod=1e9+7;
int main(){
	faster();
	nhap();
	bellmanFord(1);
}