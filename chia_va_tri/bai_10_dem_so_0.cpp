#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int mod=1e9+7;
int first_pos(int a[],int n){
	int l=0;
	int r=n-1;
	int res=-1;
	while(l<=r){
		int mid=(l+r)/2;
		if(a[mid]==1){
			res=mid;
			r=mid-1;
		}
		else{
			l=mid+1;
		}
	}
	return res;
}
int main(){
	faster();
	int n;
	cin>>n;
	int a[n];
	for(int &x:a){
		cin>>x;
	}
	cout<<first_pos(a,n);

}