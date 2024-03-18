#include<bits/stdc++.h>
using namespace std;
int findMaxLengthSubarray(const std::vector<int>& arr, int n) {
    int start =  0, end =  1;
    int maxLength =  1;

    while (end < arr.size()) {
        // Calculate the difference between the maximum and minimum in the current subarray
        int diff = arr[end] - arr[start];

        // If the difference exceeds n-1, move the start pointer forward
        if (diff > n -  1) {
            start++;
        } else {
            // Update the maximum length if the current subarray is longer
            maxLength = std::max(maxLength, end - start +  1);
            end++;
        }
    }

    return maxLength;
}

int main(){
    //show all output at the end of all inputs
    ios_base::sync_with_stdio(true);
    cin.tie(NULL);

    int t;
    scanf("%d", &t);
    for(int tc = 1; tc <= t; tc++){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }
        sort(a.begin(), a.end());
        //remove duplicate members from the vector
        a.erase(unique(a.begin(), a.end()), a.end());
        cout<<findMaxLengthSubarray(a, n)<<endl;
    }
}