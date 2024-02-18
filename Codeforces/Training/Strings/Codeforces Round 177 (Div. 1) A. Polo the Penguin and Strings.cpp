// Problem Link: https://codeforces.com/problemset/problem/288/A
// Rate: 1300
// Topics: greedy, strings

#include<iostream>

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

    int size, distinct;
    cin >> size >> distinct;

    char *ans = new char[size];

    if (distinct > size || distinct == 1 && size != 1){
        cout << "-1";
    } else if (distinct == size){
        for (int i = 0; i < size; i++){
            cout << (char)('a' + i);
        }
    } else {
        char behind = 'a' + (distinct - 1);

        for (int i = size - 1; behind != 'b'; i--, behind--){
            ans[i] = behind;
        }

        for (int i = 0; i < size - (distinct - 2); i++){
            ans[i] = (i % 2 == 0 ? 'a' : 'b');
        }

        for (int i = 0; i < size; i++){
            cout << ans[i];
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