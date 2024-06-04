#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
int n,k;
string s;
char X[1000];
void ql(int i,int start){
	for(int j=start;j<=n;j++){
		X[i]=s[j];
		if(i==k){
			for(int u=1;u<=k;u++){
                cout<<X[u];
			}
			cout<<endl;
		}
		else{
			ql(i+1,j);
		}
	}
}
int mod=1e9+7;
int main(){
	faster();
	cin>>n>>k>>s;
	sort(s.begin(),s.end());
	s='0'+s;
	ql(1,1);


}