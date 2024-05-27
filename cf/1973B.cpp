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

int main()
{
	fastio;
    string str; 
    int32_t ors, x;
    int n, i, k;
    // vector <int32_t> a;
    vector <bitset<20>> b;

    testcase{
        cin>>n;
        // a.clear();
        b.clear();
        for(i=0; i<n; i++){
            cin>>x;
            // a.pb(x);
            b.pb(x);
        }
        // for(auto x:b)cout<<x<<nl;
        int ans = 0;
        int dist;
        for(int i = 0; i < 20; i++){
            dist = 0;   
            for(int j = 0; j < n; j++){
                dist++;
                if(b[j][i]){
                    ans = max(ans, dist);
                    dist = 0;
                }
            }
            if(dist == n)
                dist = 1;
            ans = max(ans, dist);
        }
        cout<<ans<<nl;
    }    

}