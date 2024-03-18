#include <bits/stdc++.h>

#define flin            freopen("input.txt", "r", stdin); 
#define flout           freopen("output.txt", "w", stdout);
#define ll              long long
#define ull             unsigned long long
#define fastio          ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl              '\n'
#define nll             '\0'
#define pb              push_back
#define bdyptb          return 0;
#define sorted(x)       sort(x.begin(), x.end())
#define reversed(x)     reverse(x.begin(), x.end())
#define all(x)          x.begin(), x.end()
#define mset(a, b)      memset(a, b, sizeof(a));
#define testcase        ll t,tt; cin>>tt; for(t=1;t<=tt;t++)

#define pi acos(-1.00)   
#define mx 1000007

using namespace std;

inline int cw_throw(int player, int distance, int team_size){
    if ((player + distance) % team_size == 0)
        return team_size;
    return (player + distance) % team_size;
}

inline int ccw_throw(int player, int distance, int team_size){
    if ((player - distance +team_size) % team_size == 0)
        return team_size;
    return (player - distance +team_size) % team_size;
}

int main()
{
	fastio;
	testcase{
        int n,m,x;
        cin>>n>>m>>x;
        int players[n] = {0};
        vector<int> player_having_ball;
        player_having_ball.push_back(x);
        players[x-1] = 1;
        for (int i = 0; i < m; i++){
            int r;
            char c;
            cin>> r >> c;
            vector<int> prev_players = player_having_ball;
            player_having_ball.clear();
            for(int j : prev_players){
                if(c == '1'){
                    int px = ccw_throw(j, r, n);
                    // cout<<px<<nl;
                    if (players[px-1] == 0){
                        player_having_ball.push_back(px);
                        players[px-1] = 1;
                    }
                }
                else if (c == '0'){
                    int py = cw_throw(j, r, n);
                    if (players[py-1] == 0){
                        player_having_ball.push_back(py);
                        players[py-1] = 1;
                    }                
                }
                else{
                    int px = ccw_throw(j, r, n);
                    if (players[px-1] == 0){
                        player_having_ball.push_back(px);
                        players[px-1] = 1;
                    }

                    int py = cw_throw(j, r, n);
                    if (players[py-1] == 0){
                        player_having_ball.push_back(py);
                        players[py-1] = 1;
                    }   
                }
                // for(int i : player_having_ball){
                //     cout<<i;
                // }
                // cout<<nl;
            }
            // if(player_having_ball.empty()){
            //     player_having_ball = prev_players;
            // }
            // for(int i : players){
            //     cout<<i;
            // }
            for(int i = 0; i<n; i++){
                players[i] = 0;
            }
            // for(int i : players){
            //     cout<<i;
            // }
            // cout<<nl;
        }
        cout<<player_having_ball.size()<<nl;
        sorted(player_having_ball);
        for(int i : player_having_ball){
            cout<<i<<" ";
        }
        cout<<nl;
    }
}