#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int mod=1e9+7;
char c;
int n,k,X[1000];
void ql(int i){
     for(int j=1;j<=n;j++){
     	X[i]=j;
     	if(i==k){
     		for(int u=1;u<=k;u++){
     			cout<<char(X[u]+'A'-1);
     		}
     		cout<<endl;
     	}
     	else {
     		ql(i+1);
     	}

     }
}
int main(){
	faster();
	cin>>c>>k;
    n=c-'A'+1;
	ql(1);

	
}