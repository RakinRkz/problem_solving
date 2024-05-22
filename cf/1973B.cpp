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
bool checker(vector<int32_t> arr, int k){
    int n = arr.size();
    int or_sum0 = 0;

    for(int i=0; i<n-k+1; i++){
        // cout<<"****"<<i<<nl;
        int or_sum1 = 0;
        for(int j=i; j<i+k; j++){
            // cout<<"******"<<j<<nl;
            or_sum1 |= arr[j];
        }
        if (or_sum1 != or_sum0 and i != 0){
            // cout<<or_sum0<<" "<<or_sum1<<nl; 
            return false;
        }
        or_sum0 = or_sum1;
    }

    return true;
}
int finder(vector<int32_t> arr, int l, int r){
    if(l==r) return l+1;
    if(checker(arr, l+1)){
        return l+1;
    }
    int  mid = (l+r)/2;
    // cout<<"*********"<<l<<" "<<mid<<" "<<r<<nl; 
    if(checker(arr, mid+1)){
        return finder(arr, l, mid);
    }
    else
        return finder(arr, mid+1, r);
}
int main()
{
	fastio;
    string str; 
    int32_t ors, x;
    int n, i, k;
    vector <int32_t> a;
    vector <int32_t> orss;
    testcase{
        cin>>n;
        ors = 0;
        for(i=0; i<n; i++){
            cin>>x;
            ors |= x;
            a.pb(x);
            orss.pb(ors);
            // cout<<ors<<" ";
        }
        // cout<<nl;
        k = 1;
        for (i=n-1; i>0; i--){
            if(orss[i] == orss[i-1]){
                k = i; 
            }
            else
                break;
        }
        // cout<<k<<nl;
        // bool flag = true;
        // int32_t or0 = orss[k-1];

        // while(k < n ){
        //     if(checker(a, k))
        //         break;
        //     else
        //         k++;           
        // }

        k = finder(a, k-1, n-1);
        
        cout<<k<<nl;
        orss.clear();
        a.clear();
    }
}