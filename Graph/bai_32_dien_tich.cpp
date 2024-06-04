#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
int n,m;
char a[1005][1005];
int mod=1e9+7;
int dx[4]={-1,0,0,1};
int dy[4]={0,-1,1,0};
int cnt;
void nhap(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
}
void loang(int i,int j){
	a[i][j]='#';
	cnt++;
	for(int k=0;k<4;k++){
		int i1=i+dx[k];
		int j1=j+dy[k];
		if(i1>=1 && i1<=n && j1>=1 && j1<=m && a[i1][j1]=='.'){
          loang(i1,j1);
		}
	}
}
int main(){
	faster();
	nhap();
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(a[i][j]=='.'){
				cnt=0;
				loang(i,j);
				cout<<cnt<<" ";
			}
		}
	}
}