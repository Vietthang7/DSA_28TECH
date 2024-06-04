// #include<bits/stdc++.h>
// using namespace std;

// using ll=long long;
// #define pb push_back
// #define sz size()
// #define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
// #define vi vector<int>
// #define vll vector<ll>

// int mod=1e9+7;
// int X[1000],n, a[1000],final;
// void ktao(){
// 	for(int i=1;i<=n;i++){
// 		X[i]=0;
// 	}
// }
// void sinh(){
// 	int i=n;
// 	while(i>=1 && X[i]==1){
// 		X[i]=0;
// 		i--;
// 	}
// 	if(i==0){
// 		final=1;
// 	}
// 	else {
// 		X[i]=1;
// 	}
// }
// int main(){
// 	faster();
// 	cin>>n;
// 	for(int i=1;i<=n;i++){
// 		cin>>a[i];
// 	}
// 	ktao();
// 	ll ans=LLONG_MAX;
// 	while(!final){
// 		ll s1=0;
// 		ll s2=0;
// 		for(int i=1;i<=n;i++){
// 			if(X[i]){
// 				s1+=a[i];
// 			}
// 			else {
// 				s2+=a[i];
// 			}
// 		}
// 		ans=min(ans,abs(s1-s2));
// 		sinh();
// 	}
// 	cout<<ans<<endl;
// }
#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int mod=1e9+7;
int a[1000];
int main(){
	faster();
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	ll ans=LLONG_MAX;
	for(int i=0;i<(1<<n);i++){
		ll s1=0,s2=0;
		for(int j=0;j<n;j++){
			if((i&(1<<j))!=0){
				s1+=a[j];
			}
			else {
				s2+=a[j];
			}
		}
		ans=min(ans,abs(s1-s2));
	}
	cout<<ans;

}