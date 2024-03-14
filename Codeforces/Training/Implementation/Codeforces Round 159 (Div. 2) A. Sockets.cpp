// Problem Link: https://codeforces.com/problemset/problem/257/A
// Rate: 1100
// Topics: Sortings, greedy, implementation


#include<bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define endl "\n";
#define pb push_back
#define optimize ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

const int mod = 1e9+7;

void solve() {
    short pipeLines, devices, directSockets;
    cin >> pipeLines >> devices >> directSockets;
    short pipeLine[pipeLines];

    for (short i = 0; i < pipeLines; i++) {
        cin >> pipeLine[i];
    }

    sort (pipeLine, pipeLine + pipeLines, greater<int>());

    short index = 0, usedPiepeLines = 0;

    while (directSockets != 0 && index < pipeLines) {
        if (directSockets >= devices) {
            cout << usedPiepeLines; return;
        }

        devices -= pipeLine[index++];
        directSockets--;
        usedPiepeLines++;
    }

    if (devices <= 0) {
        cout << usedPiepeLines; return;
    }


    while (index < pipeLines) {
        if (devices <= 0) {
            cout << usedPiepeLines; return;
        }

        devices -= pipeLine[index++] - 1;
        usedPiepeLines++;
    }

    cout << (devices <= 0 ? usedPiepeLines : -1);
}

int main() {
    optimize;
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}