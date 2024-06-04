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
	int s;
	cin>>s;
	int tien[]={1000,500,200,100,50,20,10,5,2,1};
	int cnt=0;
	int i=0;
	while(s !=0){
		cnt+=s/tien[i];
		s=s%tien[i];
		i++;
	}
	cout<<cnt;
}