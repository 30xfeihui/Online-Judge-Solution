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

    int b,k,g; cin>>b>>k>>g;

    b-=1;

    int group = k/g;

    int ans;

    if(g==0) ans = 0;
    else{
        ans = ((int)b/group);
        if(b%group!=0) ans += 1;
    }

    cout << ans << endl;                                                                                                                                                                                                    

    return 0;
}