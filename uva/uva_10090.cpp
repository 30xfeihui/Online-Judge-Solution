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
    	int c1,n1; cin >> c1>>n1;
    	int c2,n2; cin >> c2>>n2;
    	int x,y;
    	int m1,m2;

    	// equation: n1*x + n2*y = n

    	int gcd = extgcd(n1,n2,x,y);

    	bool con = (n%gcd==0);

    	if(con){

    		//int nn = max(n/n1, n/n2);

    		// ax + by = c; here n is c, that is why x *= (n/gcd);

    		x *= (n/gcd);
    		y *= (n/gcd);

    		// two equations of Linear Diophantine
            /* x = x0 + (b/d)n, y = y0 − (a/d)n, where n is an integer */

            // derivation of n based on the fact that x and y has to be positive
            // x0 + (b/d)n >= 0, solve for n: we get n >= -x0*d/b
            // y0 - (a/d)n >= 0, solve for n: we get n <= y0*a/b
            // putting together x0*d/b <= n <= y0*d/b

    		n2 = (n2/gcd); n1 = (n1/gcd);

       		int lb = ceil(-(double)x/n2);
    		int ub = floor((double)y/n1);

    		if(lb<=ub){

    			// which one : ub or lb ?
    			int value1 = (c1*(x+(n2*lb))) + (c2*(y-(n1*lb)));
    			int value2 = (c1*(x+(n2*ub))) + (c2*(y-(n1*ub)));

    			// answer
    			if(value1<value2){
    				m1 = x+n2*lb;
    				m2 = y-n1*lb;
    			}
    			else{
    				m1 = x+n2*ub;
    				m2 = y-n1*ub;
    			}

    		}
    		else con=false;

    	}
    	if(con) cout << m1 << " " << m2 << endl;
    	else cout << "failed" << endl;
    }

    return 0;
}
