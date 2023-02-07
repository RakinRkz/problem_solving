#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    for(int tt=0; tt<t; tt++){
        int n;
        cin >> n;
        vector<vector<int>> arr(n, vector<int> (n-1));
        // int arr[n][n];

        for(int i=0; i<n; i++){
            for(int j=0; j<n-1; j++){
                cin >> arr[i][j];
            }
        }
        int suffix;
        int head;

        map<int, vector<int>> mp;

        for(int i=0; i<n; i++){
            mp[arr[i][0]].push_back(i);
        }
        map<int, vector<int>>::iterator it;
        it = mp.begin();
        if(it->second.size() > 1)
        {
            head = it->first;            
            it ++;
            suffix = it->second[0];
        }
        else
        {
            suffix = it->second[0];
            it ++;
            head = it->first;  
        }
        cout<<head<<" ";
        for(int i=0; i<n-1; i++){
            cout<<arr[suffix][i]<<" ";
        }
        cout<<endl;
    }
}