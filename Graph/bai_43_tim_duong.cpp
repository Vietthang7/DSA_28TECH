#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
int n,m,s1,s2,t1,t2;
char a[505][505];
int dx[]={-1,0,0,1};
int dy[]={0,-1,1,0};
int mod=1e9+7;
int ok=0;
void ql(int i,int j ,int k_prev,int cnt){
	if(cnt>3){
		return ;
	}
	if(i==t1 && j==t2){
		ok=1;
		return ;
	}
	a[i][j]='*';
	for(int k=0;k<4;k++){
		int i1=i+dx[k];
		int j1=j+dy[k];
		if(i1>=1 && i1<=n && j1>=1 &&j1<=m && a[i1][j1]!='*'){
			if(k_prev==k){
				ql(i1,j1,k,cnt);
			}
			else {
				ql(i1,j1,k,cnt+1);
			}
		}
	}
	a[i][j]='.';
}
int main(){
	faster();
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
			if(a[i][j]=='S'){
				s1=i;
				s2=j;
			}
			else if(a[i][j]=='T'){
				t1=i;
				t2=j;
			}
		}
	}
	ql(s1,s2,-1,0);
	if(ok){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}


}