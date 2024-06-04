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
	int b[n];
	for(int &x:a){
		cin>>x;
	}
	for(int &x:b){
		cin>>x;
	}
	ll sum=0;
	sort(a,a+n);
	sort(b,b+n);
	for(int i=0;i<n;i++){
		sum+=1ll*a[i]*b[i];
	}
	cout<<sum;
}