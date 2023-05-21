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

int modd(int a, int mod){
    return ((a%mod)+mod)%mod;
}

int mod_inv(int b, int mod){
    int x,y;
    int d = extgcd(b,mod, x,y);
    if(d!=1) return -1;

    return modd(x,mod);
}
// call by mod_inv(a,mod)
// (a^-1)%mod


int32_t main()
{   
    ios::sync_with_stdio(false) ; cin.tie(0) ;

    int n,m;
        
    while(cin>>n>>m){
        if(n==0 && m==0) break;

        int a,b; char sign;
        int ans; int mod = n;
        for(int i=0;i<m;i++){

            cin>>a>>sign>>b;

            if(sign=='+'){
                ans = ((a%mod)+(b%mod))%mod;
                ans = (ans+mod)%mod;
            }
            else if(sign=='-'){
                ans = ((a%mod)-(b%mod))%mod;
                ans = (ans+mod)%mod;
            }
            else if(sign=='*'){
                ans = ((a%mod)*(b%mod))%mod;
                ans = (ans+mod)%mod; 
            }
            else{
                if(__gcd(n,b)!=1) ans = -1;
                else{
                    b = mod_inv(b, mod)%mod;

                    ans = ((a%mod)*(b%mod))%mod;
                    ans = (ans+mod)%mod;
                }
            }

            cout << ans << endl;
        }
    }

    return 0;
}
