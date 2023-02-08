#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    for(int tt=0; tt<t; tt++){
        int n;
        cin >> n;
        vector<int> v;
        for (int i=1; i<=n*n; i++){
            if(i&1)
                v.push_back(i);
            else
                v.push_back(n*n - i);
        }

        int output[n][n];

        for(int i=0, vx=0; i<n; i++){
            if(i&1)
                for(int j=0; j<n; j++, vx++){
                    output[i][j] = v[vx];
                }
            else
                for(int j=n-1; j>=0; j--, vx++){
                    output[i][j] = v[vx];
                }
        }

        for(int i=0; i<n; i++){
            for(int j=0;j<n; j++)
                cout<<output[i][j]<<' ';
            cout<<endl;
        }

    }
}