#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int mod=1e9+7;
int n, X[100],final=0;
void sinh(){
	int i=n/2;
	while(i>=1 && X[i]==1){
		X[i]=0;
		i--;
	}
	if(i==0){
		final=1;
	}
	else {
		X[i]=1;
	}

}
int main(){
	faster();
	cin>>n;
	if(n%2==0){
		final=0;
		while(!final){
			for(int i=1;i<=n/2;i++){
				cout<<X[i];
			}
			for(int i=n/2;i>=1;i--){
				cout<<X[i];
			}
			cout<<endl;
			sinh();
		}
	}
	else {
		final=0;
		while(!final){
			for(int u=0;u<=1;u++){
				for(int i=1;i<=n/2;i++){
					cout<<X[i];
				}
				cout<<u;
				for(int i=n/2;i>=1;i--){
					cout<<X[i];
				}
				cout<<endl;
			}
			sinh();
		}
	}
}