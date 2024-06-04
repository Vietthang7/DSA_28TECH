 #include<bits/stdc++.h>
 using namespace std;
 
 using ll=long long;
 #define pb push_back
 #define sz size()
 #define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
 #define vi vector<int>
 #define vll vector<ll>
 
 int mod=1e9+7;
 int a[1000];
 vector<string> res;
 int main(){ 
 	faster();
 	int n;
 	cin>>n;
 	for(int i=0;i<(1<<n);i++){
 		string tmp="";
 		for(int j=0;j<n;j++){
 			if((i&(1<<j))!=0){
 				tmp+=to_string(j+1)+" ";
 			}
 		}
 		res.push_back(tmp);
 	}
 	res.erase(res.begin());
 	sort(res.begin(),res.end());
 	for(string x:res){
 		cout<<x<<endl;
 	}
 }