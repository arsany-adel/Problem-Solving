// Problem Link: https://codeforces.com/problemset/problem/493/A
// Rate: 1300
// Topics: implementaion

#include<bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define endl "\n";
#define pb push_back
#define optimize ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

const int mod = 1e9+7;

void solve() {
    string homeTeam, awayTeam;
    cin >> homeTeam >> awayTeam;
    
    set<int> homePlayers, awayPlayers;
    set< pair<string, short> > bannedPlayers;
    
    short fouls;
    cin >> fouls;

    while (fouls--) {
        short player, minute;
        char team, card;
        cin >> minute >> team >> player >> card;

        if (card == 'r') {
            if (!bannedPlayers.count({(team == 'a' ? awayTeam : homeTeam), player})) {
                cout << (team == 'a' ? awayTeam : homeTeam) << ' ' << player << ' ' << minute << endl;

                bannedPlayers.insert({(team == 'a' ? awayTeam : homeTeam), player});
            } 
        } else {
            if ( (team == 'a' ? awayPlayers.count(player) : homePlayers.count(player)) ) {
                if (!bannedPlayers.count({(team == 'a' ? awayTeam : homeTeam), player})) {
                    cout << (team == 'a' ? awayTeam : homeTeam) << ' ' << player << ' ' << minute << endl;

                    bannedPlayers.insert({(team == 'a' ? awayTeam : homeTeam), player});
                }


                (team == 'a' ? awayPlayers.erase(player) : homePlayers.erase(player));
            } else {
                (team == 'a' ? awayPlayers.insert(player) : homePlayers.insert(player));
            }
        }
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