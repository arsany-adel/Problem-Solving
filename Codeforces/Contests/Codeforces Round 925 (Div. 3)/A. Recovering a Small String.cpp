//Topics: string, brute force

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

    int tries;
    cin >> tries;

    char alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    while (tries--){
        int value; cin >> value;
        bool done = false;

        for (int i = 1; i <= 26; i++){
            for (int j = 1; j <= 26; j++){
                for (int k = 1; k <= 26; k++){
                    if (i + j + k == value){
                        cout << alphabet[i - 1] << alphabet[j - 1] << alphabet[k - 1] << endl;
                        done = true;
                        break;
                    }
                }

                if (done) break;
            }

            if (done) break;
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