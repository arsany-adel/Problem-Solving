// Problem Link: https://codeforces.com/problemset/problem/495/A
// Rate: 1100
// Topics: implementation

#include<bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define endl "\n";
#define pb push_back
#define optimize ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

const int mod = 1e9+7;

void solve() {
    string clock; cin >> clock;

    map <char, short> conversion = { {'1', 6}, {'2', 1}, {'3', 2},
                                     {'4', 2}, {'5', 3}, {'6', 1},
                                     {'7', 4}, {'8', 0}, {'9', 1}, {'0', 1} };

    cout << (conversion[clock[0]] + 1) * (conversion[clock[1]] + 1);
}

int main() {
    optimize;
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}