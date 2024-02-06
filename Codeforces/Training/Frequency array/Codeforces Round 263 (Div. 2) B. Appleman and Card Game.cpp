// Problem link: https://codeforces.com/problemset/problem/462/B
// Rate: 1300
// Topics: greedy, frequency array, sorting

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

    ll cards, chosen;
    cin >> cards >> chosen;
    ll freq[26] = {};

    for (int i = 0; i < cards; i++){
        char card; cin >> card;

        freq[card - 'A']++;
    }

    sort(freq, freq + 26, greater<ll>());

    ll maxCoins = 0;

    for (int i = 0; i < 26; i++){
        if (chosen == 0) break;

        if (freq[i] >= chosen){
            maxCoins += chosen * chosen;
            chosen = 0;
        } else {
            maxCoins += freq[i] * freq[i];
            chosen -= freq[i]; 
        }
    }

    cout << maxCoins;
}


int main() {
    int t = 1;
    while(t--){
        solve();
    }
    return 0;
}