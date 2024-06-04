#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int mod=1e9+7;
int lomuto(int a[],int l,int r){
	int pivot=a[r];
	int j=l-1;
	for(int i=l;i<r;i++){
		if(a[i]<=pivot){
			++j;
			swap(a[j],a[i]);
		}
	}
	swap(a[r],a[j+1]);
	return j+1;
}
void qs(int a[],int l,int r){
	if(l<r){
	int p=lomuto(a,l,r);
	qs(a,l,p-1);
	qs(a,p+1,r);
    }
}
int main(){
	faster();
	int n;
	cin>>n;
	int a[n];
	for(int &x:a){
		cin>>x;
	}
	qs(a,0,n-1);
	for(int x:a){
		cout<<x<<" ";
	}
}