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
#define max_num 1000007

using namespace std;



int main()
{
    fastio;
    int a1, b1, c1, a2, b2, c2, n, ans;
    testcase{
        cin>>a1>>b1>>c1>>a2>>b2>>c2;
        if(a1+b1+c1 > a2+b2+c2){
            cout<<1<<nl;
        }
        else if(a1+b1+c1 < a2+b2+c2){
            cout<<2<<nl;
        }
        else{
            if(a1 > a2){
                cout<<1<<nl;
            }
            else if(a1 < a2){
                cout<<2<<nl;
            }
            else{
                if(b1 > b2){
                    cout<<1<<nl;
                }
                else if(b1 < b2){
                    cout<<2<<nl;
                }
                else{
                    if(c1 > c2){
                        cout<<1<<nl;
                    }
                    else if(c1 < c2){
                        cout<<2<<nl;
                    }
                    else{
                        cout<<0<<nl;
                }
            }
        }
    }
    
}