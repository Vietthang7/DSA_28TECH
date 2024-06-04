#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
int n;
string s;
vector<char> v[10];
char X[15];
void xuly(){
    int idx=2;
    for(char c='a';c<='z';c++){
    	v[idx].push_back(c);
    	if(idx==7||idx==9){
    		if(v[idx].size()==4){
    			idx++;
    		}
    	}
    	else{
            if(v[idx].size()==3){
            	idx++;
            }
    	}
    }
}
void ql(int i,string res){
	int num=s[i]-'0';
	for(char c:v[num]){
		X[i]=c;
		res+=c;
		if(i==n){
		cout<<res<<" ";
		}
		else {
			ql(i+1,res);
		}
		res.pop_back();
	}
}
int mod=1e9+7;
int main(){
	faster();
	xuly();
	cin>>s;
	n=s.size();
	s='0'+s;
	string tmp="";
	ql(1,tmp);


}