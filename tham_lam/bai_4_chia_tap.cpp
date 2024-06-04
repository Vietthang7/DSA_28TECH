#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int mod=1e9+7;
int main(){
	faster();
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int &x:a){
		cin>>x;
	}
	sort(a,a+n);
	k=min(k,n-k);
	ll s1=0;
	ll s2=0;
	for(int i=0;i<n;i++){
		if(i<k){
			s1+=a[i];
		}
		else{
			s2+=a[i];
		}
	}
	cout<<s2-s1;
}