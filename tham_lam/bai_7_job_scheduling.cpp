#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int mod=1e9+7;
bool cmp(pair<int,int> a , pair<int,int> b){
	return a.second < b.second;
}
int main(){
	faster();
	int n;
	cin>>n;
	pair<int,int> a[n];
	for(int i=0;i<n;i++){
		cin>>a[i].first>>a[i].second;
	}
	sort(a,a+n,cmp);
	int cnt=1;
	int kt=a[0].second;
	for(int i=1;i<n;i++){
		if(a[i].first>kt){
			cnt++;
			kt=a[i].second;
		}
	}
	cout<<cnt<<endl;
}