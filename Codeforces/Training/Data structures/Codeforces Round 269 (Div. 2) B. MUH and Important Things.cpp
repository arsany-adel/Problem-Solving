// Problem link: https://codeforces.com/problemset/problem/471/B
// Rate: 1300
// Topics: data structures, implementation

#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define endl "\n"
#define pb push_back
#define optimize ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

const int mod = 1000003;

bool checkPlans(map<int, vector<int>> difficulties) {
    int freq = 0;

    for (const auto& it : difficulties) {
        if (it.second.size() > 2) return true;

        if (it.second.size() == 2) freq++;

        if (freq == 2) return true;
    }

    return false;
}

void changePlanOrder(map<int, vector<int>>& difficulties, bool& swapper, auto& ite) {
    if (swapper == false) {
        while(true) {
            if (ite->second.size() > 2) {
                swap(ite->second[0], ite->second[1]);
                swapper = true;
                break;
            } else if (ite->second.size() == 2) {
                swap(ite->second[0], ite->second[1]);
                swapper = true;
                ite++;
                break;
            }

            ite++;
        }
    } else {
        while(true) {
            if (ite->second.size() > 2) {
                swap(ite->second[1], ite->second[2]);
                break;
            } else if (ite->second.size() == 2) {
                swap(ite->second[0], ite->second[1]);
                break;
            }

            ite++;
        }
    }
}

void solve() {
    int tasks; cin >> tasks;
    map<int, vector<int>> difficulties;

    for(int i = 0; i < tasks; i++) {
        int task; cin >> task;
        difficulties[task].pb(i);
    }

    if (!checkPlans(difficulties)) {
        cout << "NO"; return;
    }

    auto ite = difficulties.begin();
    bool swapper = false;
    short plans = 3;

    cout << "YES" << endl;

    while(plans--) {
        for (const auto& it : difficulties) {
            for (const auto& index : it.second) {
                cout << index + 1 << ' ';
            }
        }

        cout << endl;

        changePlanOrder(difficulties, swapper, ite);
    }
    
}

int main() {
    optimize;
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}