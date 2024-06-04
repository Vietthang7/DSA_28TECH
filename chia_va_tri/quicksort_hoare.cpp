#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int mod=1e9+7;
int hoare(int a[],int l,int r){
	int pivot=a[l];
	int i=l-1;
	int j=r+1;
	while(1==1){
		do{
			++i;
		}
		while(a[i]<pivot);
		do{
			--j;
		}while(a[j]>pivot);
		
		if(i>=j){
			return j;
		}
		swap(a[i],a[j]);
	}
	return -1;
}
void qs(int a[],int l,int r){
	if(l<r){
	int p=hoare(a,l,r);
	qs(a,l,p);
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