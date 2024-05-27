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

void update_bin(vector<int> &vbin, int pos){
	if(pos == vbin.size()){
		vbin.pb(1);
		return;
	}
	int carry = vbin[pos] & 1;
	vbin[pos] = (vbin[pos] ^ 1);
	if(carry == 1){
		update_bin(vbin, pos+1);
	}
}

int main()
{
	fastio;
	int x;
	testcase{
		cin>>x;
		vector<int> vbin;
		while(x>0){
			vbin.pb(x%2);
			x/=2;
		}
		for(int i=1; i<vbin.size(); i++){
			if(vbin[i] == 1 and vbin[i-1] == 1){
				vbin[i] = 0;
				vbin[i-1] = -1;
				update_bin(vbin, i+1);
			}
		}
		cout<<vbin.size()<<nl;
		for(int i=0; i<vbin.size(); i++){
			cout<<vbin[i]<<" ";
		}
		cout<<nl;
	}
}

/*
 


*/