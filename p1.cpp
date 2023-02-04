#include<bits/stdc++.h>
using namespace std;
map<int, int> factors;
void primeFactors(int n)
{
    // Print the number of 2s that divide n
    while (n % 2 == 0)
    {
        factors[2]++;
        n = n/2;
    }
 
    // n must be odd at this point. So we can skip
    // one element (Note i = i +2)
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        // While i divides n, print i and divide n
        while (n % i == 0)
        {
            factors[i]++;
            n = n/i;
        }
    }
 
    // This condition is to handle the case when n
    // is a prime number greater than 2
    if (n > 2)
        factors[n]++;
}
int main(){
    int t;
    
    cin>>t;
    for(int tt=0; tt<t; tt++){
        int n;
        cin>>n;

        factors.clear();
        primeFactors(n);
        
        map<int, int>::iterator mit;
        long long sum = 0;
        long long tmp;
        while(true){
            tmp = 1;
            for(mit = factors.begin(); mit != factors.end(); mit++){
                if(mit->second >= 1)
                {
                    mit->second --;
                    tmp *= mit->first;
                }
            }
            if(tmp != 1)
                sum += tmp;
            else
                break;
        }
        cout<<sum<<endl;
        
    }
}