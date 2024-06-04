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
bool check(int s){// bellman_ford
	d[s]=0;
	for(int i=1;i<=n-1;i++){
		for(edge e:dscanh){
	         if(d[e.x]<1e9){
	         	d[e.y]=min(d[e.y],d[e.y]+e.w);
	         }	
	     }
	}
	bool ok=false;
	for(edge e:dscanh){
		if(d[e.x]<1e9){
			if(d[e.y]>d[e.x]+e.w){// chu trinh am
				ok=true;
				break;
			}
		}
	}
	return ok;
}

bool negativeCycle(){
	fill(d+1,d+n+1,1e9);
	bool res=false;
	for(int i=1;i<=n;i++){
		if(d[i]==1e9){
			if(check(i)){
				res=true;
				break;
			}
		}
	}
	return res;
}
int main(){
	faster();
	nhap();
	if(negativeCycle()){
		cout<<1<<endl;// khong ton tai chu trinh am
	}
	else{
		cout<<0<<endl;// ton tai chu trinh am
	}
}