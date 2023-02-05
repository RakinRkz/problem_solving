#include<bits/stdc++.h>
using namespace std;

int func(string s){
    int sum = 0;
    int chars[26] = {0};
    for(auto ch: s) chars[ch - 'a']++;

    int op[26] = {0};

    for(int i=0; i<s.length(); i++){
        int ch = s[i] - 'a';
        chars[ch]--, op[ch]++;

        int tmp = 0;
        for(int j=0; j<26; j++){
            tmp += min(1, chars[j]) + min(1, op[j]);
        }
        sum = max(sum, tmp);
    }
    return sum;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    for(int tt=0; tt<t; tt++){
        int n;
        string str;
        cin>>n;
        cin>>str;

        cout<<func(str)<<endl;
    }
}