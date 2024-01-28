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

    int length, alphas;
    cin >> length >> alphas;

    if (length == 1){
        for (char i = 'a'; i < 'a' + alphas; i++){
            cout << i;
        }
        cout << endl;
    } else if (alphas == 1){
        for (int i = 0; i < length; i++){
            cout << 'a';
        }
        cout << endl;
    } else {
        bool flip = true;

        while(length--){
            if (flip){
                for (char i = 'a'; i < 'a' + alphas; i++){
                    cout << i;
                }
                flip = false;
            } else {
                for (char i = 'a' + (alphas - 1); i >= 'a'; i--){
                    cout << i;
                }
                flip = true;
            }
        }

        cout << endl;
    }
}


int main() {
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}