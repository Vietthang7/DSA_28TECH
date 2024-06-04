#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
int n,s,a[1000],X[1000];
int ok=0;
void ql(int i,int start,int sum){
	if(ok){
		return;
	}
     for(int j=start;j<=n;j++){
     	if(sum+a[j]<=s && ok==0){
     		X[i]=a[j];
     		sum+=a[j];
     		if(sum==s){
     			ok=1;
     			break;
     		}
     		else if(sum<=s){
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
	cin>>n;
	s=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		s+=a[i];
	}
	sort(a+1,a+n+1);
	if(s%2!=0){
		cout<<0<<endl;
	}
	else{
		s/=2;
	ql(1,1,0);
	if(!ok){
		cout<<0<<endl;
	}
	else{
		cout<<1<<endl;
	}
}
}