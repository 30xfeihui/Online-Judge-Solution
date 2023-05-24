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

int32_t main()
{
    ios::sync_with_stdio(false) ; cin.tie(0) ; 

    int t=1, tt=1; cin>>t;
    
    while(t--){

        int n; cin >> n;

        int line = 4*(n-1);
        int curve = (n*n) - line;

        double ans = (line*1.0) + (sqrt(2)*curve*1.0);

        if(n==1) ans = 0.0;

        cout << fixed << setprecision(3) << ans << endl;;
        if(t) cout << endl;
        
    }
    return 0;
}
