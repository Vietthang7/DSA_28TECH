#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int mod=1e9+7;
int a[1005][1005]={0};
int n,m;
void solve(){
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		a[x][y]=a[y][x]=1;
	}
}
int main(){
	faster();
	cin>>n>>m;
	solve();
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
} 