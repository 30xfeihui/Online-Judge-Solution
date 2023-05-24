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

int black_base(int n){
    if(n&1) return n/2;
    return (n/2)-1;
}

int white_base(int n){
    return n/2;
}

int32_t main()
{
    ios::sync_with_stdio(false) ; cin.tie(0) ;

    int n,m,c;

    while(cin >> n>>m>>c, n||m||c){

        n-=7; m-=7; // only the last cells

        int ans = n*m; // total cells

        if(c) ans += 1;

        ans /= 2;
        
        cout << ans << endl;

    }

    return 0;
}
