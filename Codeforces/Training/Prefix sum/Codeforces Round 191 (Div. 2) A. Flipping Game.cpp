// Problem Link: https://codeforces.com/problemset/problem/327/A
// Topics: dp, implementation, brute force, prefix sum
// Rate: 1200

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

    short size; cin >> size;
    
    // prefix sum arrays
    short ones[size + 1] = {}, zeroes[size + 1] = {};
    short totalOnes = 0;

    for (short i = 1; i <= size; i++){
        short in; cin >> in;

        if (in == 1){
            totalOnes++;
            ones[i] = ones[i - 1] + 1;
            zeroes[i] = zeroes[i - 1];
        } else {
            zeroes[i] = zeroes[i - 1] + 1;
            ones[i] = ones[i - 1];
        }
    }

    short maxOnes = 0;

    for (short i = 1; i <= size; i++){
        for (short j = i; j <= size; j++){
            short flippingResult = ((zeroes[j] - zeroes[i - 1]) - (ones[j] - ones[i - 1])) + totalOnes;

            maxOnes = max(maxOnes, flippingResult);
        }
    }

    cout << maxOnes;
}


int main() {
    int t = 1;
    while(t--){
        solve();
    }
    return 0;
}