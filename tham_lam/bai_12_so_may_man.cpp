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
	int sum;
	cin>>sum;
	int d4=-1,d7;
	for(d7=sum/7;d7>=0;d7--){
		if((sum-d7*7)%4==0){
			d4=(sum-d7*7)/4;
			break;
		}
	}
	if(d4!=-1){
		for(int i=0;i<d4;i++){
			cout<<4;
		}
		for(int i=0;i<d7;i++){
			cout<<7;
		}
	}
	else{
		cout<<-1;
	}
}