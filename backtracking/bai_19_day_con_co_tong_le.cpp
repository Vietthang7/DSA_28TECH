#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
int n,a[1000],X[1000];
vector<string> v;
void ql(int i,int start,int sum){
   for(int j=start;j<=n;j++){
   	    X[i]=a[j];
   	    sum+=a[j];
   	    if(sum%2!=0){
   	    	string s="";
   	    	for(int k=1;k<=i;k++){ 
               s+=to_string(X[k])+" ";
   	    	}
   	    	v.push_back(s);
   	    }
   	    	ql(i+1,j+1,sum);
   	    sum-=a[j];
   }
}
int mod=1e9+7;
int main(){
	faster();
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	ql(1,1,0);
	if(v.size()==0){
		cout<<"NOT FOUND";
	}
	else{
	sort(v.begin(),v.end());
	for(string x:v){
		cout<<x<<endl;
	}
}

}