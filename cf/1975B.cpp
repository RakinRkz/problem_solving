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

// //minimum divisor of a number
// int minDivisor(int n, int limit, vector<int> &a){
    
//     for(int i=0; i<limit; i++){
//         if(n%a[i] == 0){
//             return a[i];
//         }
//     }
// }

//minimum divisor of a number, optimized using binary search
int minDivisor(int n, int limit, vector<int> &a){
    int l = 0, r = limit-1;
    int mid;
    while(l<=r){
        if(n%a[l] == 0)
            return a[l];
        
        mid = l + (r-l)/2;
        if(n%a[mid] == 0){
            r = mid;
        }
        else{
            l = mid+1;
        }
    }
    return a[r];
}

//number of coprimes in the array
int coprimes(int n, vector<int> &a){
    int count = 0;
    for(int i=0; i<n; i++){
        if(__gcd(a[i], n) == 1){
            count++;
        }
    }
    return count;
}   

int main()
{
	fastio;
    int n;
	testcase{
        cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        
        sort(all(a));
        vector<int> non_div;
        for(int i=1; i<n; i++){
            if(a[i]%a[0] != 0){
                non_div.pb(i);
            }
        }
        
        bool flag = true;
        for(auto x: non_div){
            // cout<<x<<nl;
            if(a[x]%a[non_div[0]] != 0){
                flag = false;
                break;
            }
        }
        if(flag)cout<<"Yes\n";
        else cout<<"No\n";
    }
}

