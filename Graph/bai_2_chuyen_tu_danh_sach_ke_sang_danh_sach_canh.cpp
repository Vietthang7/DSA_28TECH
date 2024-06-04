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
	cin.ignore();
	for(int i=1;i<=n;i++){
		string s;
		getline(cin,s);
		stringstream ss(s);
		string tmp;
		while(ss>>tmp){
			if(stoi(tmp)>i){
				cout<<i<<" "<<tmp<<endl;
			}
		}
	}
}