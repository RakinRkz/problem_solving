#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    for(int tt=0; tt<t; tt++){
        char c;
        cin>>c;
        string chk = "cdefors";
        if (chk.find(c) != std::string::npos)
            cout<<"yes\n";
        else
            cout<<"no\n";
    }
}