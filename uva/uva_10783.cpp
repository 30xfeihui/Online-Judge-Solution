#include <bits/stdc++.h>
using namespace std;
#define int long long

/**
 * 
 * 9XZER0
 * 
 * **/

int32_t main()
{
    ios::sync_with_stdio(false) ; cin.tie(0) ;
    
    int t, tt=1; cin>>t;

    while(t--){
        int a,b; cin>>a>>b;

        int sum = 0;

        for(int i=a;i<=b;i++)
            if(i&1) sum+=i;

        cout << "Case " << tt++ <<": "<<sum<<endl;

    }

    return 0;
}