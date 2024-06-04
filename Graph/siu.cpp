#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define pb push_back
#define sz size()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

struct edge {
    int x, y, w;
};

int n, m;
vector<edge> dscanh;
int d[1005];

void nhap() {
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        dscanh.push_back({x, y, z});
    }
}

bool check(int s) {
    d[s] = 0;
    for (int i = 1; i <= n - 1; i++) {
        for (edge e : dscanh) {
            if (d[e.x] < 1e9) {
                d[e.y] = min(d[e.y], d[e.x] + e.w);
            }
        }
    }
    for (edge e : dscanh) {
        if (d[e.x] < 1e9 && d[e.y] > d[e.x] + e.w) {
            return true;
        }
    }
    return false;
}

bool checkCT() {
    fill(d + 1, d + n + 1, 1e9);
    for (int i = 1; i <= n; i++) {
        if (d[i] == 1e9) {
            if (check(i)) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    faster();
    int t;
    cin >> t;
    while (t--) {
        dscanh.clear();
        nhap();
        if (checkCT()) {
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
    }
    return 0;
}
