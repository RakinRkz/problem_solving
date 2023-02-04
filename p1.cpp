#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    
    cin>>t;
    for(int tt=0; tt<t; tt++){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a.begin(), a.end(), greater<int>());
        
    }
}