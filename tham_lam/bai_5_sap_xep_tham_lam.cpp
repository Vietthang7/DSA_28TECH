#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int mod=1e9+7;
// 7
// 0 6
int check(int a[],int b[],int n){
	for(int i=0;i<n;i++){
		if(b[i]!=a[i] && b[i]!=a[n-i-1]){
			return 0;
		}
	}
	return 1;
}
int main(){
	faster();
	int n;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	sort(b,b+n);
	if(check(a,b,n)){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}

}