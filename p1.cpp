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
        sort(a.begin(), a.end());
        // for(int i=0; i<n; i++){
        //     cout<<a[i];
        // }
        cout<<endl;
        int cnt = 0;
        for(int k=0; k<n-1; k++){
            if(k > a[k] and k < a[k+1]) 
                cnt++;
        }
        cout<<cnt<<endl;
    }
}