#include <bits/stdc++.h>
using namespace std;
#define int int64_t
#define endl "\n"
#define LSONE(x) ((x) & -(x))

/**
 * 
 * 
 * 9xZER0
 * 
 **/


int32_t main()
{
    ios::sync_with_stdio(false) ; cin.tie(0) ; 

    int t; cin>>t;

    while(t--){
        int x,n; cin>>x>>n;
        vector<int> arr(n);

        for(auto &i: arr) cin>>i;

        int con = 0;
        for(int i=0;i<(1<<n);i++){

            int mask = i;
            int subset_sum = 0;
            while(mask){                    // find subset of mask
                int p = LSONE(mask);        // p is a power of 2 eg, 2^p
                int tz = __builtin_ctz(p);  // trailing zero of p, which is the subset

                subset_sum += arr[tz];
                mask -= p;                  // remove the processed subset
            }

            if(subset_sum==x){
                con=1;
                break;
            }
        }

        if(con) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
