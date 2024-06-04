#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int mod=1e9+7;
int n,a[1000];
int X[1000];
vector<string> v;
void ql(int i ,int start){
	for(int j=start;j<=n;j++){
		if(a[j]>X[i-1]){
			X[i]=a[j];
			if(i>=2){// i la so thu tu cua mang X
				string s="";
				for(int k=1;k<=i;k++){
					s+=to_string(X[k])+" ";
				}
				v.push_back(s);
			}
			ql(i+1,j+1);// khong duoc else
		}
	}
}
int main(){
	faster();
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	X[0]=0;
	ql(1,1);
	sort(v.begin(),v.end());
	for(string x:v){
		cout<<x<<endl;
	}
}