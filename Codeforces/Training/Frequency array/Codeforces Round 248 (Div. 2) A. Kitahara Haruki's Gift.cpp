/*
    problem link: https://codeforces.com/problemset/problem/433/A
    Rate: 1100
    Topics: Brute force, frequency array, implementation
*/

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

    int apples; cin >> apples;
    int freq[3] = {0};
    
    for (int i = 0; i < apples; i++){
        int size; cin >> size;
        
        freq[size / 100]++;
    }


    if (apples == 1 || freq[1] % 2 != 0){
        cout << "NO";
    } else if (freq[1] == 0 && freq[2] % 2 != 0 || freq[2] == 0 && freq[1] % 2 != 0) {
        cout << "NO";
    } else {
        cout << "YES";
    }
}


int main() {
    int t = 1;
    while(t--){
        solve();
    }
    return 0;
}