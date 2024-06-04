#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
int n,a[100][100],check=0;
string s="";
pair<int,int> path[4]={{1,0},{0,-1},{0,1},{-1,0}};
string S="DLRU";
void ql(int i,int j){
	if(i==n && j==n){
		check=1;
		cout<<s<<endl;
		return;
	}
	for(int k=0;k<4;k++){
	int i1=i+path[k].first;
	int j1=j+path[k].second;
	if(i1>=1 && i1<=n && j1>=1 && j1<=n && a[i1][j1]==1){
      s+=S[k];
      a[i1][j1]=0;
      ql(i1,j1);
      s.pop_back();
      a[i1][j1]=1;
	}		
	}
}
int mod=1e9+7;
int main(){
	faster();
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	a[1][1]=0;// neu du lieu khong dam bao a[1][1] va a[n][n] la 1 thi can phai if de kiem tra
	ql(1,1);
	if(check==0){
		cout<<-1;
	}
}