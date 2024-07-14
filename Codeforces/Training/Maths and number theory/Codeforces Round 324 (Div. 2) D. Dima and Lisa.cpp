// Problem link: https://codeforces.com/problemset/problem/584/D
// Rate: 1800
// Topics: number theory, maths, brute force

#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define endl "\n"
#define pb push_back
#define optimize ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

const int mod = 1000003;

bool isPrime(int num) {
    if (num == 1) return false;

    if (num == 2 || num == 3) return true;

    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return false;
    }

    return true;
}

void solve() {
    int num; cin >> num;
    multiset<int> primeNumbers;

    while(num != 0) {
        int temp = num;

        while(true) {
            if (isPrime(temp)) {
                if ((num - temp) % 2 == 0 || isPrime(num - temp)) {
                    break;
                }
            }

            temp--;
        }

        num -= temp;
        primeNumbers.insert(temp);
    }

    cout << primeNumbers.size() << endl;
    for (const auto& it : primeNumbers) {
        cout << it << ' ';
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