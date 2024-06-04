#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int mod=1e9+7;
ll n,k;
struct matran{
	ll A[15][15];
	// nap chong toan tu nhan cho ma tran
	friend matran operator *(matran x , matran y){
		matran z;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				z.A[i][j]=0;
				for(int k=0;k<n;k++){
					z.A[i][j]+=(x.A[i][k]*y.A[k][j])%mod;
					z.A[i][j]%=mod;
				}
			}
		}
		return z;

	}
};
matran binpow(matran a,ll k){
	if(k==1){
		return a;
	}
	matran X=binpow(a,k/2);
	if(k%2==0){
		return X*X;
	}
	else{
		return X*X*a;
	}
}
int main(){
	faster();
	matran x;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>x.A[i][j];
		}
	}
	matran res=binpow(x,k);
	ll sum=0;
	for(int i=0;i<n;i++){
		sum+=res.A[i][n-1];
		sum%=mod;
	}
	cout<<sum;

}