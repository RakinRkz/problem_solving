#include<bits/stdc++.h>
using namespace std;
int func(string s){
    int sum = 0;
    int chars[26] = {0};
    for(int i=0; i<s.length(); i++){
        int ch = s[i] - 'a';
        if(chars[ch] == 0){
            sum ++;
            chars[ch] ++;
        }
    }
    return sum;
}
int main(){
    int t;
    cin>>t;
    for(int tt=0; tt<t; tt++){
        int n;
        string str;
        cin>>n;
        cin>>str;

        int mx = -1;
        for(int i=0; i<n; i++){
            cout<<str.substr(0, i)<<"   ";
            // mx = max(mx, func(str.substr(0, i)));
            cout<<str.substr(i, n-i)<<endl;
            // mx = max(mx, func(str.substr(i, n-i-1)));
        }
    }
}