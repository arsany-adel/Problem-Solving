// problem Link: https://codeforces.com/problemset/problem/43/B
// Rate: 1100
// Topics: Implementation, strings

#include<bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define endl "\n"
#define pb push_back
#define optimize ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

const int mod = 1e9+7;

bool foundChar(char c, string heading, bool used[]){
    for (int i = 0; i < heading.size(); i++){
        if (c == heading[i] && !used[i]){
            used[i] = true;
            return true;
        }
    }

    return false;
}

void solve(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    string heading, text;
    getline(cin, heading);
    getline(cin, text);

    bool used[heading.size()] = {false};

    for (int i = 0; i < text.size(); i++){
        if (text[i] == ' ') continue;

        if (!foundChar(text[i], heading, used)){
            cout << "NO"; return;
        }
    }

    cout << "YES";
}


int main() {
    int t = 1;
    while(t--){
        solve();
    }
    return 0;
}