// Problem Link: https://codeforces.com/problemset/problem/574/A
// Rate: 1200
// Topics: greedy, implementation, sorting

#include<iostream>
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

    int candidates; cin >> candidates;
    int limak; cin >> limak;
    int candidate[--candidates];

    for (int i = 0; i < candidates; i++){
        cin >> candidate[i];
    }

    sort(candidate, candidate + candidates);

    int bribes = 0;
    while(limak <= candidate[candidates - 1]){
        limak++;
        candidate[candidates - 1]--;
        bribes++;
        
        int last_element = candidates - 1;
        while (candidate[last_element] < candidate[last_element - 1]){
            swap(candidate[last_element], candidate[last_element - 1]);
            last_element--;
        }
    }

    cout << bribes;
}


int main() {
    int t = 1;
    while(t--){
        solve();
    }
    return 0;
}