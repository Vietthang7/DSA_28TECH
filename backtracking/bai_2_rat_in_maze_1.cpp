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
void ql(int i,int j){
	if(i==n && j==n){
		cout<<s<<endl;
		check=1;
		return;
	}
	if(i+1<=n && a[i+1][j]==1){
		s+="D";
		a[i+1][j]=0;
		ql(i+1,j);
		s.pop_back();
		a[i+1][j]=1;
	}
	if(j+1<=n && a[i][j+1]==1){
		s+="R";
		a[i][j+1]=0;
		ql(i,j+1);
		s.pop_back();
		a[i][j+1]=1;
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
	ql(1,1);
	if(check==0){
		cout<<-1;
	}
}