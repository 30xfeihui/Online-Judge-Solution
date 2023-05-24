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

    int mx=1e9+7;
    int n=1;

    vector<int> square;

    while(n*n<=mx){
        square.emplace_back(n*n);
        n++;
    }

    int t=1, tt=1; cin>>t;
    
    while(t--){

        int m ; cin >> m;
        vector<int> ans;

        for(int i=0;m>square[i];i++){

            // n-x = square
            // n-square = x

            if((m - square[i])%((int)sqrt(square[i]))) continue;
            
            ans.emplace_back(m-square[i]);
        }

        sort(ans.begin(), ans.end());
        
        cout << "Case " << tt++ << ": "; 
        for(int i=0;i<ans.size();i++){
            cout << ans[i] ;
            if(i!=ans.size()-1) cout << " "; // careful here or presentation error
        }
        cout << endl;
    }
    return 0;
}
