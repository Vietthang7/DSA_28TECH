#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int mod=1e9+7;
int n,k,sum;
int X[1000];
int a[1000];
bool used[1000];
int ok;
void ql(int i,int bd,int cur_sum,int cnt){
	if(cnt==k+1){
		ok=1;
		return;
	}
	for(int j=bd;j<=n;j++){
		if(!used[j] && cur_sum+a[j]<=sum){
			X[i]=a[j];
			cur_sum+=a[j];
			used[j]=true;
			if(cur_sum==sum){
				ql(i+1,1,0,cnt+1);
			}
			else if(cur_sum<sum){
				ql(i+1,j+1,cur_sum,cnt);
			}
			cur_sum-=a[j];
			used[j]=false;
		}
	}
}
int main(){
	faster();
	int t;
	cin>>t;
	while(t--){
	sum=0;
	memset(used,false,sizeof(used));
	memset(a,0,sizeof(a));
	memset(X,0,sizeof(X));
	ok=0;
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	if(sum%k==0){
		sum/=k;
		ql(1,1,0,1);
		cout<<ok<<endl;
	}
	else{
		cout<<0<<endl;
	}

}
}