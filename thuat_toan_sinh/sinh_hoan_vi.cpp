 #include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int mod=1e9+7;
int X[1000],n;
int a[1000];
int final=0;
void ktao(){
	for(int i=1;i<=n;i++){
		X[i]=i;
	}
}
void sinh(){
	int i=n-1;
	while(i>=1 && X[i]>X[i+1]){
		--i;
	}
	if(i==0){
		final=1;
	}
	else {
		// tim thang nho nhat >X[i]:i+1=>n
		int j=n;
		while(X[i]>X[j]){
			--j;
		}
		swap(X[i],X[j]);
		reverse(X+i+1,X+n+1);
	}
}
int main(){
	faster();
	cin>>n;
	ktao();
	while(final==0){
		for(int i=1;i<=n;i++){
			cout<<X[i]<<" ";
		}
		cout<<endl;
		sinh();
	}
}
/* hoan vi  thuan
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
	int a[n+1];
	for(int i=1;i<=n;i++){
		a[i]=i;
	}
	do{
		for(int i=1;i<=n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;

	}
	while(next_permutation(a+1,a+n+1));

}*/
/* hoan vi nguoc
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
	int a[n+1];
	for(int i=1;i<=n;i++){
		a[i]=n-i+1;
	}
	do{
		for(int i=1;i<=n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;

	}while(prev_permutation(a+1,a+n+1));
}*/
/* co ap dung voi string va vector 
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
	string s="sanfsbfgr";
	next_permutation(s.begin(),s.end());
	cout<<s<<endl;
}*/