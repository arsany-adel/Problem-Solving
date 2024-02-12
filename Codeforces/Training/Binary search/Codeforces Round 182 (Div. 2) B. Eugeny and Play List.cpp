// Problem Link: https://codeforces.com/problemset/problem/302/B
// Rate: 1200
// Topics: Implementation, binary search, two pointers

#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

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

    int songs, queries;
    cin >> songs >> queries;

    pair<ll, ll> *playtime = new pair<ll, ll>[songs + 1];
    playtime[0] = {0, 0};

    for (int i = 1; i <= songs; i++){
        ll repeat, time;
        cin >> repeat >> time;

        playtime[i].first = playtime[i- 1].second + 1;
        playtime[i].second = playtime[i - 1].second + repeat * time;
    }

    while (queries--){
        int query; cin >> query;

        int l = 1, r = songs;

        while(l <= r){
            int m = (l + r) / 2;

            if (query >= playtime[m].first && query <= playtime[m].second){
                cout << m << endl;
                break;
            } else if (query < playtime[m].first){
                r = m - 1;
            } else {
                l = m + 1;
            }
        }
    }
}


int main() {
    int t = 1;
    while(t--){
        solve();
    }
    return 0;
}