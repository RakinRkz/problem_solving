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



//if there exist atmost 2 non-increasing parts 
bool nondecreasing(vector<int> &a){
    int count = 1;
    for(int i=1; i<a.size(); i++){
        if(a[i] < a[i-1]){
            count++;
        }
    }
    // cout<<count<<nl;
    if(count == 1){
        return true;
    }
    else if(count == 2 and a[0] >= a[a.size()-1]){
        return true;
    }
    return false;
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
        //detect number of peaks and valleys
        int peaks = 0, valleys = 0;
        bool increase = false;
        bool decrease = false;

        if(nondecreasing(a)){
            cout<<"Yes\n";
        }
        else{
            //no
            cout<<"No\n";
        }
        
    }
}
