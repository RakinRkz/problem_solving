#include <bits/stdc++.h>

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
#define mx 1000007

using namespace std;


int main()
{
	fastio;
	int n;
	testcase{
        cin>>n;
		int a[n],b[n];
		for(int i=0;i<n;i++){
			cin>>b[i];
		}
		a[0]=1;
		for(int i=1; i<n-1; i++){
			if(b[i] == 0){
				a[i] = a[i-1];
			}
			else{
				a[i] = 1 + a[i-1];
			}
		}
		if(a[n-1]+a[0]%2 == b[0]){
			cout<<"yes\n";	
		}
		else{
			cout<<"no\n";
		}
	}
}

/*
1 3 5 7 2
0 0 0 0 1 

2 3 5 7 2
1 0 0 1 0 
*/