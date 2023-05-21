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
 * 
 * 9xZER0
 * 
 **/

int expo(int x,int y, int p){
    int res = 1;
    x = x%p;
    if(x==0) return 0;

    while(y>0){
        if(y&1) res = (res*x)%p;

        y = y>>1;
        x = (x*x)%p;
    }
    return (res+p)%p;
}

// int is unsigned long long

int32_t main()
{
    ios::sync_with_stdio(false) ; cin.tie(0) ; 

    int t=1, tt=1; cin>>t;
    
    while(t--){
	    int a,b,c; cin >> a>>b>>c;
	    vector<int> fib(30001);

	    fib[0] = 0;
	    fib[1] = 1%c; // careful here

	    int i = 2; bool con = false;
	    for(;i<=3060;i++){
	    	
	    	if((fib[i-2]==0 && fib[i-1]==1) && con) break;
	    	fib[i] = (fib[i-2]+fib[i-1])%c;
	    	con = true;

	    }

	    int cycle_length = i-2;
	    if(c==1) cycle_length = 2;
        
        int ans = expo(a,b, cycle_length);

        cout << fib[ans] << endl;
    }
    return 0;
}
