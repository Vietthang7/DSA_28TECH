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
	int n,m,k;
	cin>>n>>m>>k;
	int a[n];
	int b[m];
	for(int &x:a){
		cin>>x;
	}
	for(int &x:b){
		cin>>x;
	}
	vector<int> v;
	int i=0;
	int j=0;
	while(i<n && j<m){
		if(a[i]<=b[j]){
			v.push_back(a[i++]);
		}
		else{
			v.push_back(b[j++]);
		}
	}
	while(i<n){
		v.push_back(a[i++]);
	}
	while(j<m){
		v.push_back(b[j++]);
	}
	cout<<v[k-1]<<endl;// vi la truy cap vao vi tri so.
}