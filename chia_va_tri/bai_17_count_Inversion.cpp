#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int mod=1e9+7;
ll merge(int a[],int l,int m,int r){
	vector<int> v1(a+l,a+m+1);
	vector<int> v2(a+m+1,a+r+1);
	int i=0;
	int j=0;
	ll dem=0;
	while(i<v1.size() && j< v2.size()){
		if(v1[i]<=v2[j]){
			a[l]=v1[i];
			l++;
			i++;
		}
		else{
			dem+=v1.size()-i;
			a[l]=v2[j];
			l++;
			j++;
		}
	}
	while(i<v1.size()){
		a[l]=v1[i];
		l++;
		i++;
	}
	while(j<v2.size()){
		a[l]=v2[j];
		l++;
		j++;
	}
	return dem;
}
ll mergesort(int a[],int l, int r){
	if(l<r){
		ll res=0;
		int m=(l+r)/2;
		res+=mergesort(a,l,m);
		res+=mergesort(a,m+1,r);
		res+=merge(a,l,m,r);
		return res;
	}
	return 0;
}
int main(){
	faster();
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<mergesort(a,0,n-1)<<endl;
}