#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int mod=1e9+7;
int main(){
	faster();
	int n;
	cin>>n;
	int a[5]={0};
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		a[x]++;
	}
	int ans=a[4]+a[2]/2;
	a[2]%=2;// co the du 1 nhom 2
	ans+=min(a[1],a[3]);
	if(a[1]<=a[3]){
		ans+=a[3]-a[1]+a[2];
	}
	else{
		a[1]-=a[3];
		if(a[2]!=0){
			// van du 1 nhom 2 nguoi
			if(a[1]<=2){
				++ans;
			}
			else{
				++ans;
				a[1]-=2;// ghep 2 nguoi nhom 1 voi 1 nhom 2
				ans+=a[1]/4+min(1,a[1]%4);
			}
		}
		else{
			ans+=a[1]/4+min(1,a[1]%4);
		}
	}
	cout<<ans<<endl;

}