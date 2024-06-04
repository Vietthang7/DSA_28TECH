#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int mod=1e9+7;
int ok=0;
int floor(int a[],int n,int x){
	int l=0,r=n-1,res=-1;
	while(l<=r){
      int mid=(l+r)/2;
      if(a[mid]<=x){
      	res=mid;
      	l=mid+1;
      }
      else{
      	r=mid-1;
      }
	}
	if(res==-1){
		return -1;
	}
	else{
		return res;
	}
}
int main(){
	faster();
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int &x:a){
		cin>>x;
	}
	int u=floor(a,n,k);
	if(u==-1){
		cout<<-1;
	}
	else{
		cout<<a[u]<<endl;
	}

}