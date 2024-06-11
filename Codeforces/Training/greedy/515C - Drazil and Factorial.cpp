// Problem link: https://codeforces.com/problemset/problem/515/C
// Rate: 1400
// Topics: greedy, maths, sorting

#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define endl "\n"
#define pb push_back
#define optimize ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

const int mod = 1000003;


void solve() {
    int size; cin >> size;
    string num; cin >> num;

    string ref[] = {"2", "3", "322", "5", "53", "7", "7222", "7332"}; // every factorial starting from 2! can be represented with lower factorials multiplied together or even itself
    string res = "";

    for (char x : num) {
        if (x == '1' || x == '0') continue;

        res += ref[(x - '0') -2];
    }

    sort(res.begin(), res.end());
    reverse(res.begin(), res.end());

    cout << res;
}

int main() {
    optimize;
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
