// Problem Link: https://codeforces.com/problemset/problem/368/B
// Rate: 1100
// Topics: data structures

#include<bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define endl "\n"
#define pb push_back
#define optimize ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

const int mod = 1e9+7;

void solve(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int n, m; cin >> n >> m;
    int arr[n];

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int count_distinct[n];
    set<int> count;

    for (int i = n - 1; i >= 0; i--){
        count.insert(arr[i]);
        count_distinct[i] = count.size();
    }

    while(m--){
        int x; cin >> x;
        cout << count_distinct[x - 1] << endl;
    }
}


int main() {
    int t = 1;
    while(t--){
        solve();
    }
    return 0;
}
