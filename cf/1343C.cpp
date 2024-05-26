#include <bits/stdc++.h>
#include <cstring>
#include <ctype.h>
#include<stdlib.h>

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
#define max_num 10000000007

using namespace std;
ll get_max(vector<ll>& a, int l, int r) {
    ll max_element = -max_num;
    for(int i=l; i<r; i++)  max_element = max(max_element, a[i]);
    return max_element;
}
int main()
{
    fastio;
    int n;
    testcase{
        cin>>n;
        vector<ll> a(n);
        for(ll& x: a) cin>>x;
        int p1, p2;
        ll sum=0;
        for(p1=0, p2=1; p2<n; p2++){
            if((a[p1]<0 and a[p2]<0) || (a[p1]>0 and a[p2]>0)){
                continue;
            }
            else if(a[p1]<0){
                sum += get_max(a, p1, p2);
                p1 = p2;
            }
            else{
                // cout<<a[p2]<<nl;
                sum += get_max(a, p1, p2);
                p1 = p2;
            }
        }
        if(a[p1]<0){
            sum += get_max(a, p1, p2);
            p1 = p2;
        }
        else{
            sum += get_max(a, p1, p2);
            p1 = p2;
        }
        cout<<sum<<nl;
    }
        
}