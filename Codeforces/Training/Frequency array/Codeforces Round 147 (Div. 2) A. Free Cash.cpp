// Problem Link: https://codeforces.com/problemset/problem/237/A
// Topics: implementation, data structures, frequency array
// Rate: 1000

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

    int clients;
    cin >> clients;

    if (clients == 1) {
        cout << "1"; return;
    }

    map< pair<short, short>, int> freq;

    while(clients--) {
        short hour, min;
        cin >> hour >> min;

        freq[{hour, min}]++;
    }

    int max_clients = 1;
    for (const auto &it : freq){
        max_clients = max(max_clients, it.second);
    }

    cout << max_clients;
}


int main() {
    int t = 1;
    while(t--){
        solve();
    }
    return 0;
}