#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int mod=1e9+7;
struct matran{
	ll A[2][2];
	// nap chong toan tu nhan cho ma tran
	friend matran operator *(matran x , matran y){
		matran z;
		for(int i=0;i<2;i++){
			for(int j=0;j<2;j++){
				z.A[i][j]=0;
				for(int k=0;k<2;k++){
					z.A[i][j]+=x.A[i][k]*y.A[k][j];
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
	x.A[0][0]=1;
	x.A[1][0]=1;
	x.A[0][1]=1;
	x.A[1][1]=0;
	ll n;
	cin>>n;
	matran res=binpow(x,n);
	cout<<res.A[1][0]<<endl;

}