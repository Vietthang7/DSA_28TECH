#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int mod=1e9+7;
void merge(int a[],int l,int m,int r){
	vector<int> v1(a+l,a+m+1);
	vector<int> v2(a+m+1,a+r+1);
	int i=0;
	int j=0;
	while(i<v1.size() && j<v2.size()){
		if(v1[i]<v2[j]){
			a[l]=v1[i];
			l++;
			i++;
		}
		else{
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
}
void mergesort(int a[],int l, int r){
	if(l<r){
		int m=(l+r)/2;
		mergesort(a,l,m);
		mergesort(a,m+1,r);
		merge(a,l,m,r);
	}
}
int main(){
	faster();
	int a[]={1,2,5,4,6,7,9,8,10};
	mergesort(a,0,9);
	for(int x:a){
		cout<<x<<" ";
	}
}