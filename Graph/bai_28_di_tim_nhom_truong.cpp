#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
int n,m;
int bac[1005];
vector<int> ke[1005];
int nhomTr = 1001;// truong hop nho 0 va 7 cung bac nhung kh gan cho 7 
int used[1005];
void nhap(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		ke[x].pb(y);
		ke[y].push_back(x);
		bac[x]++;
		bac[y]++;
	}
}
void dfs(int u){
	if(bac[u]>bac[nhomTr] || bac[u]==bac[nhomTr] && u<nhomTr){
         nhomTr=u;
	}
	used[u]=1;
	for(int v:ke[u]){
		if(!used[v]){
			dfs(v);
		}
	}
}
int mod=1e9+7;
int main(){
	faster();
	nhap();
	vector<int> v;
	for(int i=1;i<=n;i++){
		if(!used[i]){
           nhomTr=1001;
           dfs(i);
           v.push_back(nhomTr);
		}
	}
	sort(v.begin(),v.end());
	for(int x:v){
		cout<<x<<" ";
	}
}