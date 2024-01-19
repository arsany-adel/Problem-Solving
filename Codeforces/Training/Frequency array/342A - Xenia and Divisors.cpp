// Problem Link: https://codeforces.com/problemset/problem/342/A

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

    int size; cin >> size;
    int freq[8] = {0};

    for (int i = 0; i < size; i++){
        int x; cin >> x;
        freq[x]++; 
    }


    if (freq[5] == 0 && freq[7] == 0 && freq[2] >= freq[4] && freq[1] == freq[4] + freq[6] && freq[2] + freq[3] == freq[4] + freq[6]){
        for (int i = 0; i < min(freq[2], freq[4]); i++){
            cout << "1 2 4" << endl;
        }

        freq[2] -= freq[4];

        for (int i = 0; i < min(freq[3], freq[6]); i++){
            cout << "1 3 6" << endl;
        }

        freq[6] -= freq[3];

        for (int i = 0; i < min(freq[2], freq[6]); i++){
            cout << "1 2 6" << endl;
        }
    } else {
        cout << "-1";
    }
}


int main() {
    int t = 1;
    while(t--){
        solve();
    }
    return 0;
}