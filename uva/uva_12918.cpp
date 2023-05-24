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

        int n,m; cin >> n>>m;

        int extra_room = m-n;
        int extra_room_try = extra_room*n;

        int key_try = n*(n-1)/2;

        int ans = extra_room_try + key_try;

        cout << ans << endl;
        
    }
    return 0;
}
