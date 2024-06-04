#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
int main(){
	faster();
	int X[1005];
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>X[i];
	}
	int i=n-1;
	while(i>=1 && X[i]>X[i+1]){
		--i;
	}
	if(i==0){
		for(int j=1;j<=n;j++){
			cout<<j<<" ";
		}
	}
	else{
		int j=n;
		while(X[i]>X[j]){
			j--;
		}
		swap(X[i],X[j]);
		reverse(X+i+1,X+n+1);
		for(int k=1;k<=n;k++){
			cout<<X[k]<<" ";
		}
	}
}
/*#include<bits/stdc++.h>
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
	int a[]={3,1,4,5,6,7,8,9,2};
	next_permutation(a,a+9); vector:a.begin(),a.end();
	for(int x:a){
		cout<<x<<" ";
	}
}*/