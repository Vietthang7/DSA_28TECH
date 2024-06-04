#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int mod=1e9+7;
int X[100],n,k;


int final=0;
void ktao(){
	for(int i=1;i<=k;i++){
		X[i]=i;
	}
}
void sinh(){
	int i=k;
	while(i>=1 && X[i]==n-k+i){
		--i;
	}
	if(i==0){ 
		final=1;
	}
	else {
		X[i]++;
		for(int j=i+1;j<=k;j++){
				X[j]=X[j-1]+1;
		}
	}
}
int main(){
	faster();
	cin>>n>>k;
	ktao();
	while(final==0){
		for(int i=1;i<=k;i++){
			cout<<X[i]<<" ";
		}
		cout<<endl;
		sinh();
	}
}