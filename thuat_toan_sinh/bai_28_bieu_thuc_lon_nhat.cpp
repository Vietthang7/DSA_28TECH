#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
int n,a[1000],X[1000];
int res=-1e9;
void xuly(){
	int sum=a[1];
	for(int i=1;i<=n;i++){
     if(X[i]==1){
     	sum+=a[i+1];
     }
     else {
     	sum-=a[i+1];
     }
	}
	res=max(res,sum);
}
void ql(int i){
	for(int j=0;j<=1;j++){//1 la dau cong 0 la dau tru
		X[i]=j;
		if(i==n){
			xuly();
		}
		else {
			ql(i+1);
		}
	}
}
int mod=1e9+7;
int main(){
	faster();
	for(int i=1;i<=4;i++){
		cin>>a[i];
	}
	n=3;
	ql(1);
	cout<<res;


}