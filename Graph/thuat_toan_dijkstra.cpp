#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
typedef pair<int,int> ii;
// tim duong di ngan nhat tu mot dinh tuoi 1 dinh bat ki tren
// do thi ap dung ca co huong va vo huong
// khong trong so am
// do phuc tap:O((E+V)logV);
int n,m;
vector<ii> ke[100005];// first la luu dinh, second luu kc 
void init(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y,w;
		cin>>x>>y>>w;
		ke[x].push_back({y,w});
	}
}
void Dijkstra(int s){
	vector<int> d(n+1,1e9);// KC TU DINH S TOI MOI DINH BAN DAU GAN LA MAX 
	d[s]=0;
	priority_queue<ii,vector<ii>,greater<ii>> q;// first la luu kc con second la luu dinh do sap xep theo first
	q.push({0,s});
	while(!q.empty()){
		ii e=q.top();
		q.pop();
		int kc=e.first;
		int y=e.second;
		if(kc>d[y]){
			continue;
		}
		for(ii x:ke[y]){
			int p=x.first;
			int l=x.second;
			if(d[p]>d[y]+l){
				d[p]=d[y]+l;
				q.push({d[p],p});
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
	init();
	Dijkstra(1);
}