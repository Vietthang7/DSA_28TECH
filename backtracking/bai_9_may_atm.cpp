#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
int n,S,a[1000],X[1000];
int res=1e9;
void ql(int i, int start,int sum){
	for(int j=start;j<=n;j++){
		if(sum+a[j]<=S){
		X[i]=a[j];
		sum+=a[j];
		if(sum==S){
			res=min(res,i);
		}
		else if(sum<S){
			ql(i+1,j+1,sum);
		}
		sum-=a[j];
	    }
	    else{
		   return;
	    }
    }
}
int mod=1e9+7;
int main(){
	faster();
	cin>>n>>S;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);// sort de chay nhanh hon
	ql(1,1,0);
	if(res==1e9){
		cout<<-1;
	}
	else {
		cout<<res;
	}
	
}