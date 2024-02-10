// Problem Link: https://codeforces.com/problemset/problem/78/A
// Rate: 800
// Topics: implementation, strings, brute force

#include<iostream>
#include<string>

typedef long long ll;
typedef unsigned long long ull;

#define endl "\n"
#define pb push_back
#define optimize ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

const int mod = 1e9+7;

int countVowels(string s){
    int count = 0;

    for (short i = 0; i < s.size(); i++){
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'i' || s[i] == 'u'){
            count++;
        }
    }

    return count;
}

void solve(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    string phrase1, phrase2, phrase3;
    getline(cin, phrase1);
    getline(cin, phrase2);
    getline(cin, phrase3);

    if (countVowels(phrase1) != 5 || countVowels(phrase2) != 7 || countVowels(phrase3) != 5){
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