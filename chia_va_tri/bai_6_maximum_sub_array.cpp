#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int mod=1e9+7;
ll crossingSum(int a[],int l,int r,int mid){
	ll sumLeft=0,maxSumLeft=0;
	ll sumRight=0,maxSumRight=0;
	for(int i=mid;i>=l;i--){
		sumLeft+=a[i];
		maxSumLeft=max(maxSumLeft,sumLeft);
	}
	for(int i=mid+1;i<=r;i++){
		sumRight+=a[i];
		maxSumRight=max(maxSumRight,sumRight);
	}
	return maxSumRight+maxSumLeft;
}
ll maxSum(int a[],int l,int r){
	if(l==r){
		return a[l];
	}
	int mid=(l+r)/2;
	return max({maxSum(a,l,mid),maxSum(a,mid+1,r),crossingSum(a,l,r,mid)});
}
int main(){
	faster();
	int n;
	cin>>n;
	int a[n];
	for( int &x : a){
		cin>>x;
	}
	cout<<maxSum(a,0,n-1)<<endl;
}