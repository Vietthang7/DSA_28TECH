#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
int n, X[1000],cnt=0;
bool cot[1000],xuoi[1000],nguoc[1000];
int sum=0;
int res=-1e9;
int a[1000][1000];
void ql(int i){
	for(int j=1;j<=n;j++){
		if(!cot[j] && !xuoi[i-j+8] && !nguoc[i+j-1]){
			X[i]=j;
			cot[j]=true,xuoi[i-j+8]=true,nguoc[i+j-1]=true;
			sum+=a[i][j];
			if(i==n){
              res=max(res,sum);
			}
			else {
				ql(i+1);
			}
			cot[j]=false;
			xuoi[i-j+8]=false;
	        nguoc[i+j-1]=false;
	        sum-=a[i][j];
		}
	}
}
int mod=1e9+7;
int main(){
	faster();
	n=8;
	for(int i=1;i<=8;i++){
		for(int j=1;j<=8;j++){
			cin>>a[i][j];
		}
	}
	ql(1);
	cout<<res;
}