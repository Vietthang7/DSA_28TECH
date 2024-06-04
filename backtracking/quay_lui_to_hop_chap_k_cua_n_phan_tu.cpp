#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
int X[1000],n,k;
int mod=1e9+7;
void Try(int i){
	for(int j=X[i-1]+1;j<=n-k+i;j++){
       X[i]=j;
       if(i==k){
       	for(int l=1;l<=k;l++){
       		cout<<X[l];
       	}
       	cout<<endl;
       }
       else {
       	Try(i+1);
       }
	}
}
int main(){
	faster();
	cin>>n>>k;
	Try(1);
}