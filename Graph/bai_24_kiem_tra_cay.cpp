#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
// cay:
// khong co chu trinh
// giua 2 dinh bat ki co 1 duong di duy nhat
// lien thong
// n-1 canh

// khi nao co 1 cay
//n-1 canh
//lien thong || khong co chu trinh

int mod=1e9+7;
int n,m;
vector<int> ke[1005];
int cnt=0;
bool used[1005];
void nhap(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		ke[x].pb(y);
		ke[y].push_back(x);
	}
}
void dfs(int u){
	++cnt;
	used[u]=true;
	for(int x:ke[u]){
		if(!used[x]){
			dfs(x);
		}
	}
}
int check(){
	dfs(1);
	if(cnt==n){
		return 1;
	}
	return 0;
}
int main(){
	faster();
	nhap();
	if(m==n-1 && check()){
		cout<<"1";
	}
	else{
		cout<<"0";
	}

}