#include <bits/stdc++.h>
using namespace std;
#define int int64_t

/**
 * 
 * 9XZER0
 * 
 * **/
int32_t main()
{
    ios::sync_with_stdio(false) ; cin.tie(0) ;

    int n; cin>>n;

    if(n<=99){
        cout << 99 << endl;
        return 0;
    }
    int ans_lo = n, ans_up = n;

    int lo = 0, hi = 0;

    while((ans_up%100)!=99) ans_up++, hi++;
    while(((ans_lo%100)!=99) && ans_lo>0) ans_lo--, lo++;

    if(hi == lo) cout << ans_up << endl;
    else if(hi<lo) cout << ans_up << endl;
    else cout << ans_lo << endl;
    
    return 0;
}
