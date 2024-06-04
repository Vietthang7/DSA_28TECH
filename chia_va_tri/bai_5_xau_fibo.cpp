#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int mod=1e9+7;
int F[1000];// de luu do dai xau fibo do so ki tu = chinh so fibo do. 
char Find(int n,ll k){
	if(n==1){
		return 'A';
	}
	if(n==2){
		return 'B';
	}
	if(k<=F[n-2]){
		return Find(n-2,k);
	}
	else{
		return Find(n-1,k-F[n-2]);
	}
}

int main(){
	faster();
	F[1]=1;
	F[2]=1;
	for(int i=3;i<=92;i++){
		F[i]=F[i-1]+F[i-2];
	}
	int n;
	ll k;
	cin>>n>>k;
	cout<<Find(n,k)<<endl;


} 