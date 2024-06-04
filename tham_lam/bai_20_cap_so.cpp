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
	if(n%2!=0){
		cout<<"NO";
		return 0;
	}
	int a[n];
	for(int &x:a){
		cin>>x;
	}
	int chan=0,le=0;
	for(int x:a){
		if(x%2==0){
			++chan;
		}
		else{
			++le;
		}
	}
	if(chan%2==0 && le%2==0){
		cout<<"YES";
		return 0;
	}
	else{
		sort(a,a+n);
		int i=0;
		for(;i<n-1;i++){
			if(abs(a[i]-a[i+1])==1){
				cout<<"YES";
				return 0;
			}
		}
		if(i==n-1){
			cout<<"NO";
			return 0;
		}
	}
}