#include <bits/stdc++.h>
using namespace std;
#define int int64_t

/**
 * 
 * 
 * 9xZER0
 * 
 **/
int n,m;

bool comp(int a, int b){

    int a_mod = a%m; //if(a_mod<0) a_mod += m;
    int b_mod = b%m; //if(b_mod<0) b_mod += m;

    if(a_mod==b_mod){

        if((a&1) && (b&1)) return a>b;
        if((!(a&1)) && (!(b&1))) return a<b;
        else return (a&1); 
    }

    return a_mod<b_mod;
    //return a>b;
}


int32_t main()
{
    ios::sync_with_stdio(false) ; cin.tie(0) ;

    while(cin>>n>>m, n||m){

        vector<int> arr(n);
        for(auto &i: arr) cin>>i;


        sort(arr.begin(), arr.end(), comp);

        cout << n << " " << m << endl;
        for(auto i: arr) cout << i << endl;
    }

    cout << 0 << " " << 0 << endl;

    return 0;
}