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
	set<int> se;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			se.insert(i);
			n/=i;
		}
		if(se.size()==2){
			break;
		}
	}
	if(se.size()<=1 || n==1 || se.count(n)==1){
		cout<<"NO";
	}
	else{
		cout<<"YES";
	}
}