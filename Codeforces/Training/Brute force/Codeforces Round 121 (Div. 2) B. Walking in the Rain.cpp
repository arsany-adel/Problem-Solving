// Problem link: https://codeforces.com/problemset/problem/192/B
// Rate: 1100
// Topics: brute force, implementation

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

int findmini(int arr[], int size){
    int mini = arr[0];

    for (int i = 0; i < size; i++){
        if (arr[i] == 0){
            continue;
        } else if (arr[i] < mini){
            mini = arr[i];
        }
    }

    return mini;
}

void solve(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int size; cin >> size;
    int *tiles = new int[size];

    for (int i = 0; i < size; i++){
        cin >> tiles[i];
    }

    bool impossible = false;
    int days = 0;

    while(!impossible){
        int mini = findmini(tiles, size);
        days += mini;

        for (int i = 0; i < size; i++){
            if (tiles[i] == 0){
                continue;
            } else {
                tiles[i] -= mini;
            }
        }

        if (tiles[0] == 0 || tiles[size - 1] == 0){
            impossible = true;
            continue;
        }

        for (int i = 0; i < size - 1; i++){
            if (tiles[i] == 0 && tiles[i + 1] == 0){
                impossible = true;
                break;
            }
        }
    }

    cout << days;
}


int main() {
    int t = 1;
    while(t--){
        solve();
    }
    return 0;
}