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
    int n,k;
    int x,y,z;
	testcase{
        cin>>n>>k;
        if(n==1){
            cout<<k<<nl;
            continue;
        }
        x = floor(log2(k));
        y = pow(2,x)-1;
        z = k - y;
        cout<<y<<" "<<z<<" ";
        n-=2;
        while(n--){
            cout<<0<<" ";
        }
        cout<<nl;
    }
}