#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
int n,S,a[1000],X[1000];
int res=1e9;
int cnt=0;
int ok=0;
vector<string> v;
// void ql(int i, int start,int sum){
// 	for(int j=start;j<=n;j++){
// 	if(sum+a[j]<=S){
// 		X[i]=a[j];
// 		sum+=a[j];
// 		if(sum==S){
// 			ok=1;
// 			cnt++;
// 			string s="";
// 			for(int k=1;k<=i;k++){
// 				s+=to_string(X[k])+" ";
// 			}
// 			s.pop_back();
// 			v.push_back(s);
// 		}
// 		else if(sum<S){
// 			ql(i+1,j,sum);
// 		}
// 		sum-=a[j];
// 	    }
//     else{
// 		   return;
// 	    }
//     }
// }
void ql(int i, int start,int sum){
	for(int j=start;j<=n;j++){
	if(sum+a[j]<=S){
		X[i]=a[j];
		sum+=a[j];
		if(sum==S){
			ok=1;
			++cnt;
			string s="";
			for(int k=1;k<=i;k++){
				s+=to_string(X[k])+" ";
			}
			s.pop_back();
			v.push_back(s);
		}
		 else if(sum<S){
			ql(i+1,j,sum);
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
	cin>>n>>S;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);// sort de chay nhanh hon
	 ql(1,1,0);
	if(!ok){
		cout<<-1;
	}
	else{
		cout<<cnt<<endl;
	for(string x:v){
		cout<<"{"<<x<<"}"<<endl;
	}
}
}