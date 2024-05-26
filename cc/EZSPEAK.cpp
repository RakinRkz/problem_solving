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

vector<char> vowels = {'a','e','i','o','u'};

inline bool a_vowel(char ch){
    return ch == vowels[0] || ch == vowels[1] || ch == vowels[2] || ch == vowels[3] || ch == vowels[4];
}

bool hard(string s){
    int c = 1, mc=0;
    for (int i=1; i<s.size(); i++){
        if(!a_vowel(s[i-1]) and !a_vowel(s[i]))
            c++;
        else c = 1;
        mc = max(c,mc);
    }
    return mc >= 4;
}
int main()
{
    fastio;
    int n;
    string s;
    testcase{
        cin>>n;
        cin>>s;
        if(!hard(s)){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    
}