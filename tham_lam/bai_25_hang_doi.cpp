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
	int n;
	cin>>n;
	int a[n];
	for(int &x:a){
		cin>>x;
	}
	sort(a,a+n);
	int ans=0;
	ll sum=0;
	for(int i=0;i<n;i++){
		if(a[i]>=sum){
			++ans;
			sum+=a[i];
		}
	}
	cout<<ans;
}