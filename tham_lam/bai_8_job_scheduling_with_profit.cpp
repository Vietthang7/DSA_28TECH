#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

int mod=1e9+7;
struct Job{
  int id,deadline,profit;
};
bool cmp(Job a , Job b){
	return a.deadline>b.deadline;
}

int main(){
	faster();
	int n;
	cin>>n;
	Job a[n];
	for(int i=0;i<n;i++){
		cin>>a[i].id>>a[i].deadline>>a[i].profit;
	}
	sort(a,a+n,cmp);
	priority_queue<int> pq;
	int cur_date=a[0].deadline;
	int idx=0;
	ll res=0;
	while(cur_date>=1){
		while(idx < n && a[idx].deadline>=cur_date){
			pq.push(a[idx].profit);
			idx++;
		}
		if(!pq.empty()){
			res+=pq.top();
			pq.pop();
		}
		cur_date--;
	}
	cout<<res<<endl;

}