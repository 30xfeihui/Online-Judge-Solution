#include <bits/stdc++.h>
using namespace std;
#define int unsigned long long
#define endl "\n"
#define LSONE(x) ((x) & -(x))
#define ONBIT(x,k) ((x) | (1<<k))
#define OFFBIT(x,k) ((x) & (~(1<<k)))
#define IFONBIT(x,k) ((x) & (1<<k))

/**
 * 
 * don't know why WA
 * no output for 9223372036854775807
 * ans is 2049638230412172400
 * 
 * 1844674407370955160
 * output
 *
 * 2049638230412172399 2049638230412172400
 *
 * 9xZER0
 * 
 **/

int extgcd(int a, int b, int &x, int &y){
    int xx = y = 0;
    int yy = x = 1;

    while(b){
        int q = a/b;
        int t = b; b = a%b; a = t;

        t = xx; xx = x - q*xx; x = t;
        t = yy; yy = y - q*yy; y = t;
    }

    return a;   // returns gcd(a, b)
}
// call by extgcd(a,b,x,y)
// x,y is the answer

int32_t main()
{
    ios::sync_with_stdio(false) ; cin.tie(0) ;

    int n;

    while(cin >> n, n||0){
        int x,y;
        int a=9,b=1; // 9x+1y = n;
        int gcd = extgcd(a,b,x,y);

        cout << x << " " << y << endl;

        x *= (n/gcd);
        y *= (n/gcd);

        cout << x << " " << y << endl;
    }

    return 0;
}
