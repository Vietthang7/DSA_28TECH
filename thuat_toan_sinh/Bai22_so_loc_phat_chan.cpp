#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int mod=1e9+7;
int n,X[100],final=0;
void ktao(){
	for(int i=1;i<=n;i++){
		X[i]=6;
	}
}
void sinh(){
	int i=n;
	while(i>=1 && X[i]==8){
		X[i]=6;
		i--;
	}
	if(i==0){
		final=1;
	}
	else{
		X[i]=8;
	}
}
int main(){
	faster();
	int k;
	cin>>k;
	vector<string> v;
	for(n=1;v.size()<k;n++){
		ktao();
		final=0;
		while(!final && v.size()<k){
		string s="";
		for(int i=1;i<=n;i++){
			s+=to_string(X[i]);
		}
		for(int i=n;i>=1;i--){
			s+=to_string(X[i]);
		}
		v.push_back(s);
		sinh();
	}
}
	for(string x:v){
		cout<<x<<" ";
	}
}