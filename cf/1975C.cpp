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

//range median query
int rangeMedianQuery(vector<int> &a, int l, int r){
    vector<int>temp;
    for(int i=l; i<=r; i++){
        temp.pb(a[i]);
    }
    sorted(temp);
    return temp[(r-l)/2];
}

int main()
{
	fastio;
    int n;
	testcase{
        cin>>n;
        vector<int>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int ans = -mx;
        for(int i=0; i<n-2; i++){
            ans = max(ans, rangeMedianQuery(a, i, i+2));
        }
        if (n==2)
            ans = min(a[0], a[1]);
        cout<<ans<<nl;
    }
}
