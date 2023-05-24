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

    int a,b, mod;

    while(cin >> a>>b>>mod){

        cout << expo(a,b,mod) << endl;
 
    }

    return 0;
}
