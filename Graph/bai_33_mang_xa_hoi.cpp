#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
// ket ban la phai co canh noi chu khong phai duong di 
// n dinh neu co nC2 canh thi la hoan hao
// 1 do thi hoan hao khi cach thanh phan lien thong cua no hoan hao
// (x+y)max=x max + y max
//nC2 la gia tri ma de thoa ma dk do thi hoan hao 
int mod=1e9+7;
int n,m;
vector<int> ke[100005];
int used[100005];
int cnt=0;
void nhap(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
}
void dfs(int u){
   ++cnt;
   used[u]=1;
   for(int x:ke[u]){
   	   if(!used[x]){
   	   	dfs(x);
   	  }
   }
}
int main(){
	faster();
	nhap();
	int canh_hoan_hao=0;
	for(int i=1;i<=n;i++){
		if(!used[i]){
			cnt=0;
			dfs(i);
			canh_hoan_hao+=cnt*(cnt-1)/2;
		}
	}
	if(canh_hoan_hao==m){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
}