// Problem Link: https://codeforces.com/problemset/problem/260/A
// Rate: 1400
// Topics: implementation, number theory, maths

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

    int num, div, times;
    cin >> num >> div >> times;

    bool valid = false;

    num *= 10; // adding a new digit slot

    for (int i = 0; i <= 9; i++){
        if ((num + i) % div == 0){
            num += i;
            valid = true;
            break;
        }
    }

    if (!valid){
        cout << "-1"; return;
    }

    cout << num;

    while(--times){
        cout << '0';
    }
}


int main() {
    int t = 1;
    while(t--){
        solve();
    }
    return 0;
}