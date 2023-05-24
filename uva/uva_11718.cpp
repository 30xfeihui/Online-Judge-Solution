#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define LSONE(x) ((x) & -(x))
#define ONBIT(x,k) ((x) | (1<<k))
#define OFFBIT(x,k) ((x) & (~(1<<k)))
#define IFONBIT(x,k) ((x) & (1<<k))

/**
 * 
 * 
 * 9xZER0
 * 
 **/

// (x^y)%p

int expo(int x,int y, int p){
    int res = 1;
    x = x%p;
    if(x==0) return 0;

    while(y>0){
        if(y&1) res = (res*x)%p;

        y = y>>1;
        x = (x*x)%p;
    }
    return (res+p)%p; // safe mod for negative value
}

int32_t main()
{
    ios::sync_with_stdio(false) ; cin.tie(0) ; 

    int t=1, tt=1; cin>>t;
    
    while(t--){

        // sol = k*(n^(k-1))*sum

        int n,k,mod; cin >> n>>k>>mod;

        int a, ans = 0;

        for(int i=0;i<n;i++){
            cin >> a; a%=mod;
            ans += a;
            ans %= mod;
        }
        
        ans *= (k%mod); ans %= mod;

        ans *= expo(n, k-1, mod);
        ans %= mod;

        cout << "Case " << tt++ << ": ";
        cout << ans << endl;

    }
    return 0;
}
