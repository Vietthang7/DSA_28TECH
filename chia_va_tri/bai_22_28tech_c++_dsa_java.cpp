#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int mod=1e9+7;
ll F[1000];
string Find(int n,ll k){
	if(n==1){
		return "28tech";
	}
	if(n==2){
		return "C++";
	}
	if(n==3){
		if(k==1){
			return "DSA";
		}
		if(k==2){
			return "JAVA";
		}
	}
	if(k<=F[n-3]){
		return Find(n-3,k);
	}
	else if(k > F[n-3] && k < F[n-1] ){
		return Find(n-2,k-F[n-3]);
	}
	else{
		return Find(n-1,k-F[n-3]-F[n-2]);
	}
}
int main(){
	faster();
	F[1]=1;
	F[2]=1;
	F[3]=2;
	for(int i=4;i<=60;i++){
		F[i]=F[i-1]+F[i-2]+F[i-3];
	}
	int t;
	cin>>t;
	while(t--){
		int n;
		ll k;
		cin>>n>>k;
		cout<<Find(n,k)<<endl;
	}

}