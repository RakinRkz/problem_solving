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

//search if a number is present in the map
bool search_for(map<int, int> mp, int x){
	//if the numeber is bigger than 10e9, then it is not present in the map
	if(x > 1000000000){
		return false;
	}
	if(mp.find(x) == mp.end()){
		return false;
	}
	return true;
}

//lcm of a range of numbers in a vector that is sorted
ll lcm_of_range(vector<int> a, int l, int r){
	ll ans = a[l];
	for(int i=l+1; i<=r; i++){
		ans = (ans*a[i])/__gcd(ans, (ll)a[i]);
	}
	return ans;
}


int main()
{
	fastio;
	int n;
	testcase{
		cin>>n;
		vector<int> a(n);
		map<int, int> mp;
		for(int i=0; i<n; i++){
			cin>>a[i];
			mp[a[i]]++;
		}
		sorted(a);
		//print sorted array
		// for(int i=0; i<n; i++){
		// 	cout<<a[i]<<" ";
		// }
		// cout<<nl;
		
		int ans = 0;
		for(int i=0, j=n-1; i<n ; ){
			if(j == i){
				break;
			}
			if(!search_for(mp, lcm_of_range(a, i, j))){
				ans = max(ans, j-i+1);
				break;
			}
			else{
				j--;
			}
			
		}
		cout<<ans<<nl;
	}
}

/*
 


*/