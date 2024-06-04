#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
// dem thanh phan lien thong
int dx[4]={-1,0,0,1};
int dy[4]={0,-1,1,0};
char a[1005][1005];
int n,m;

void loang(int i,int j){
	a[i][j]='#';
	for(int k=0;k<4;k++){
		int i1=i+dx[k];
		int j1=j+dy[k];
		if(i1>=1 && i1<=n && j1>=1 &&j1<=m && a[i1][j1]=='.'){
			loang(i1,j1);
		}
	}
}
void nhap(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
}
void solve(){
	int cnt=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(a[i][j]=='.'){
				++cnt;
				loang(i,j);
			}
		}
	}
	cout<<cnt<<endl;
}
int mod=1e9+7;
int main(){
	faster();
	nhap();
	solve();

}