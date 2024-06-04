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
    int t;
    cin>>t;
    while(t--){
      string s;
      cin>>s;
      int i=s.size()-1;
      while(s[i]=='1'){
        s[i]='0';
        i--;
      }
      if(i>0){
        s[i]='1';
      }
      cout<<s<<endl;
    }
}